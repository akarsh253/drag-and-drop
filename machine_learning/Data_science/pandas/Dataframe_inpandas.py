import numpy as np 
import pandas as pd
hello = ['a','b','c','d']
data = {
'Name': ['John', 'Anna', 'Peter', 'Linda'],
'Age': [28,34,29,42],
'City': ['New York', 'Paris', 'Berlin', 'London'],
'Salary': [65000, 70000, 62000, 85000]
}

df = pd.DataFrame(data)
# print(df[['Name']])
# df["designation"] = ['Doctor','Engineer','Analyst','Businessman']
# print(df)

# df.drop("designation", axis=1,inplace = True)
# print(df)

ag =df.loc[[0,1]][["City","Salary"]]
print(ag,end='\n')

#selecting rows & colum on some condn
con1 = df[df["Age"]>30]
print(con1, end='\n')
con2 = df[(df['Age']>30) & (df['City'] == 'Paris')]
print(con2)