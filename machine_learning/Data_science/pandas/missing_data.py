import numpy as np
import pandas as pd

data = {
    'A': [1,2,np.nan,4,5],
    'B': [np.nan,2,3,4,5],
    "C": [1,2,3,np.nan,np.nan],
    'D': [1,np.nan,np.nan,np.nan,5]
}

df = pd.DataFrame(data)
#finds null values
print(df.isnull())
#drops a specific subset
print(df.dropna(subset=['A']))
#checks if all the columns have null values
print(df.isnull().any())
#drops all the null values
print(df.dropna())
#drops null values on a condition
print(df.dropna(thresh=3))


#filling missing values
#fills all values with provided parameter
print(df.fillna(0))
#filling different values for each column
values = {"A":0,"B":100,"C":200,"D":200}
print(df.fillna(value=values))
#filling values with mean
print(df.fillna(df['A'].mean()))
#filling missing values with its backward value
print(df.ffill())
#filling values with backward values
print(df.bfill())