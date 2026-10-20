from dotenv import load_dotenv
from langchain_google_genai import ChatGoogleGenerativeAI
import os

load_dotenv()
api_key=os.getenv('GOOGLE_API_KEY')

llm=ChatGoogleGenerativeAI(
  model="gemini-2.5-flash",
  temperature=0.7
)
prompt=input("Enter your prompt")
response=llm.invoke(prompt)
print(response.content)