import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

x = [1,2,3,4]
y = [2,3,4,5]
z = [5,6,7,8]

fourth_dimension = [10,20,30,40]

scatter = ax.scatter(x, y, z, c=fourth_dimension)

plt.colorbar(scatter)

plt.show()