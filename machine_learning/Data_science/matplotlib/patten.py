import matplotlib.pyplot as plt
import pandas as pd


data = pd.DataFrame({
    "Salary" : [25000,40000,35000,60000,90000,12000,34000,23000],
    "age": [1,2,3,4,5,6,7,8]
})

# plt.plot(data["Salary"], color = "red", marker = "o")
# plt.show()

# plt.hist(data["Salary"] )
# plt.show()

# plt.boxplot(data['Salary'])
# plt.show()

plt.plot(data['age'],data["Salary"], marker = 'o')
plt.show()