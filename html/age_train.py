import pandas as pd
import numpy as np


df = pd.read_csv("aug_test.csv",sep=",")
mf = pd.read_csv("Movie_Titles.csv",encoding='latin-1', index_col='item_id')
print(df.head())