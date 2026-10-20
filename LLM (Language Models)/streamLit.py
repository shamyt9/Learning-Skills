# simple_ui.py
import streamlit as st
from langchain_huggingface import ChatHuggingFace,HuggingFacePipeline
import os

os.environ['HF_HOME'] = 'E:/LLM (LANGUAGE MODELS)/HuggingFace_cache'

llm=HuggingFacePipeline.from_model_id(
  model_id="TinyLlama/TinyLlama-1.1B-Chat-v1.0",
  task="text-generation",
  pipeline_kwargs=dict(
    temperature=0.1,
    max_new_tokens=400
  )
)

model=ChatHuggingFace(llm=llm)

# Page config
st.set_page_config(page_title="Simple UI", page_icon="✨")

# Header
st.title("✨ Simple Input/Output App")

# Input
user_text = st.text_input("Enter your text:", placeholder="Type something...")

# Button
if st.button("Submit", type="primary"):
    # Output
    if user_text:
        res=model.invoke(user_text)
        cleaned_response = res.content
        import re
        cleaned_response = re.sub(r'<\|user\|>.*?</s>\s*', '', cleaned_response, flags=re.DOTALL)
        cleaned_response = re.sub(r'<\|assistant\|>\s*', '', cleaned_response)
        cleaned_response = re.sub(r'</s>\s*$', '', cleaned_response)
        
        cleaned_response = re.sub(r'\n\s*References?:.*$', '', cleaned_response, flags=re.DOTALL | re.IGNORECASE)
        cleaned_response = re.sub(r'\n\s*Capital of India can also be found in:.*$', '', cleaned_response, flags=re.DOTALL | re.IGNORECASE)
        cleaned_response = re.sub(r'\n\s*Sources?:.*$', '', cleaned_response, flags=re.DOTALL | re.IGNORECASE)
        
        cleaned_response = cleaned_response.strip()
        st.success(cleaned_response)
    else:
        st.warning("⚠️ Please enter some text!")