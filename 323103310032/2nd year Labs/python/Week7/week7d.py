import pandas as pd

data = {'a': [1, 2, 3, 4, 5], 'b': [10, 20, 30, 40, 50], 'c': [100, 200, 300, 400, 500]}
df = pd.DataFrame(data)
print("Original DataFrame:\n", df)

print("2 largest values from the column 'a' :\n", df.nlargest(2, 'a'))
print("2 smallest values from the column 'b' :\n", df.nsmallest(2, 'b'))
print("2 smallest values from the column 'c' :\n", df.nsmallest(2, 'c'))
print("3 smallest values from the column 'a' :\n", df.nsmallest(3, 'a'))
print("3 largest values from the column 'b' :\n", df.nlargest(3, 'b'))
print("3 largest values from the column 'c' :\n", df.nlargest(3, 'c'))

print("*****FROM JSON FILE******")
df2 = pd.read_json('..\Datasets\iris.json')
print("Original Dataframe of json file: \n", df2)
print("Top 3 items with largest sepalLength :\n", df2.nlargest(3, 'sepalLength'))
print("Top 3 items with smallest sepalLength :\n", df2.nsmallest(3, 'sepalLength'))