import pandas as pd 
import numpy as np

employees = pd.DataFrame({
    'employee_id': [1,2,3,4,5],
    'names': ['John', 'Anna', 'Peter', 'Linda', 'Bob'],
    'departement': ['HR', 'IT', 'Finance', 'IT', 'HR']
})

salaries = pd.DataFrame({
    'employee_id': [1,2,3,6,7],
    'salary': [60000 , 80000, 65000, 70000, 90000],
    'bonus': [5000,10000,7000,8000,12000]
})
#merging 2 dataframes
print(pd.merge(employees,salaries, on='employee_id',how="inner"))