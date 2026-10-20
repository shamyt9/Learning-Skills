from pathlib import Path
from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint
from langchain_core.messages import SystemMessage, HumanMessage
import PyPDF2
import re
import os

class PDFSummarizer:
    def __init__(self):
        """Initialize the summarizer with LLM"""
        hf_token = os.getenv("HF_TOKEN")
        if not hf_token:
            raise ValueError("HF_TOKEN not found")
        
        # Initialize LLM
        llm = HuggingFaceEndpoint(
            repo_id="deepseek-ai/DeepSeek-R1",
            huggingfacehub_api_token=hf_token,
            task="text-generation",
            max_new_tokens=512,
            temperature=0.7,
        )
        
        self.chat_model = ChatHuggingFace(llm=llm)
    
    def extract_text_from_pdf(self, pdf_path: Path) -> str:
        text = ""
        try:
            with pdf_path.open('rb') as f:
                pdf_reader = PyPDF2.PdfReader(f)
                for page in pdf_reader.pages:
                    text += page.extract_text()
            return text
        except Exception as e:
            raise Exception(f"PDF extraction failed: {e}")
    
    def summarize_text(self, text: str, max_length: int = 2000) -> str:
      
        # Truncate if too long
        if len(text) > max_length:
            text = text[:max_length] + "...[truncated]"
        
        # Create messages
        messages = [
            SystemMessage(content="You are an expert summarizer. Create concise bullet points covering key information."),
            HumanMessage(content=f"Summarize this text in bullet points:\n\n{text}")
        ]
        
        # Get response
        res = self.chat_model.invoke(messages)
        
        # Clean response
        summary = re.sub(r'<think>.*?</think>', '', res.content, flags=re.DOTALL)
        return summary.strip()
    
    def summarize_pdf(self, pdf_path: Path) -> str:
        
        text = self.extract_text_from_pdf(pdf_path)
        return self.summarize_text(text)