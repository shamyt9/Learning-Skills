import os
from pathlib import Path
from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint
from langchain_core.messages import HumanMessage, SystemMessage,AIMessage
from dotenv import load_dotenv
import re

load_dotenv(Path(__file__).resolve().parents[1] / ".env")

hf_token = os.getenv("HF_TOKEN")
if not hf_token:
    raise ValueError("HF_TOKEN is missing. Add it to the parent .env file.")

llm = HuggingFaceEndpoint(
    repo_id="deepseek-ai/DeepSeek-R1",
    huggingfacehub_api_token=hf_token,
    task="text-generation",
    max_new_tokens=512,
    temperature=0.7,
)
chat_model = ChatHuggingFace(llm=llm)
history = [
    SystemMessage(content="Keep answers short and to the point. You are a helpful AI assistant.")
]
while True:
  userInput=input("You: ").lower()
  history.append(HumanMessage(content=userInput))
  if userInput=="exit":
    break
  else:
   
   
    response = chat_model.invoke(history)
    filtered = re.sub(r'<think>.*?</think>', '', response.content, flags=re.DOTALL)
    history.append(AIMessage(content=filtered))
    print(filtered)