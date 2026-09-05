import pandas as pd 


#eda of titanic data



df = pd.read_csv('csv_files\\titanic.csv')

#step1 finding the size of data
print(df.shape)
#step2 taking a look at values in any random row and columns
print(df.sample(5))
#step 3 checking what the data types of the specific colns are of
print(df.dtypes)
#checking if the data has missing values
print(df.isnull().sum())
#check how the data looks mathematically(only for numericall columns,min/max/25,50,75%%/mean etc.)
print(df.describe())
#checking duplicate values
print(df.duplicated().sum())
#finding correlation between values
print(df.corr(numeric_only=True))