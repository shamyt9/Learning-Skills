import requests

def fetchApi():
  url = "https://api.freeapi.app/api/v1/public/randomusers?page=1&limit=10"
  response = requests.get(url)
  data=response.json()
  userData=data["data"]
  m=userData["data"]
  for user in m:
    for key,value in user.items():
       print(key,value)
  
fetchApi()  