import requests
import json
def joke():
  url="https://official-joke-api.appspot.com/jokes/random"
  response=requests.get(url)
  data=response.json()
  print(data["setup"])
  print(data["punchline"])
joke()  