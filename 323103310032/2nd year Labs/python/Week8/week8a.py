import matplotlib.pyplot as plt
import pandas as pd
data = {'no of studnts' : [5,6,2,3,8], 'marks' : [50,60,20,30,80], 'name' : ['a','b','c','d','e']}
df = pd.DataFrame(data)
print(df)
df.plot.bar(x='name', y='no of studnts', color='red')
# plt.show()
df.plot.line(x='name', y='marks', color='green')
# plt.show()
df.plot.scatter(x='name', y='marks', color='blue')
# plt.show()
df.plot.hist(x='name', y='marks', color='yellow')
plt.show()