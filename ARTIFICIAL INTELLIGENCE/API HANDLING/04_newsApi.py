import requests
import json

def getNews(city,):
  apikey="pub_683130d3238b8270351455520c0f127b7f228"
  url=f"https://newsdata.io/api/1/news?apikey={apikey}&q={city}"
  request=requests.get(url)
  data=request.json()
  checkStats=data["status"]
  i=1
  if checkStats=="success":
    for articleId in data["results"]:
      if articleId:
        print(i,":",articleId["title"])
        
      i+=1  
 
getNews("goa")
