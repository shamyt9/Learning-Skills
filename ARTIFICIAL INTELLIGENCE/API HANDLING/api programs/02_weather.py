import json
import requests
def weather(city):
  apikey="ad72932c5a4e1d2e10747e3aeaeaccc9"
  url=f'https://api.openweathermap.org/data/2.5/weather?q={city}&appid={apikey}&units=metric'
  getInfo=requests.get(url)
  if getInfo:
    data=getInfo.json()
    print("COUNTRY: "+str(data["name"]))
    print("Temperature:"+str(data['main']['temp']))
    print("Pressure:"+str(data['main']['pressure']))
    print("Humidity:"+str(data['main']['humidity']))
    print("Wind Speed:"+str(data['wind']['speed']))
    print("Wind Degree:"+str(data['wind']['deg']))
  else:
    print("Error")
weather('gorakhpur')  
  
  