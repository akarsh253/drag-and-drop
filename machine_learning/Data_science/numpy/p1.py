import numpy as np
sales_data = np.array([
    [1, 150000, 180000, 220000, 250000],
    [2, 150000, 140000, 160000, 190000],
    [3, 200000, 230000, 260000, 300000],
    [4, 180000, 210000, 240000, 270000],
    [5, 160000, 185000, 205000, 230000]
])

print(np.sum(sales_data[:, 1:], axis = 0))
print(np.min(sales_data[:, 1:], axis=1))
print(np.max(sales_data[:, 1:], axis=1))
print(np.mean(sales_data[:, 1:], axis=1))
##do vector multiplication, vectorize , etc.