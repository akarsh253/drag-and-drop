import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
dataset = pd.read_csv("data_science_lv1\\titanic.csv")
print((dataset['age'].mean))

plt.show(