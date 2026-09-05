import requests 
import pandas as pd
import numpy as np

response = requests.get(url='https://free-api-live-football-data.p.rapidapi.com/football-players-search?search=m',params='api_key')


df = pd.DataFrame(response)

print(df)