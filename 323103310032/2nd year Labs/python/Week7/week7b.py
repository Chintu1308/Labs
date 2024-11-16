import pandas as pd

data = {'a': [1, 2, 3, 4, 5], 'b': [10, 20, 30, 40, 50], 'c': [100, 200, 300, 400, 500]}
df = pd.DataFrame(data)
print("Pandas DataFrame:\n", df)
print("selecting a column A from DataFrame:\n", df['a'], sep="a")
print("selecting a column  B from DataFrame:\n", df['b'], sep="b")
print("Column Addition A+B:\n")
df['d'] = df['a'] + df['b']
print(df)
print("Column Deletion -  column C:\n")
df = df.drop('c', axis=1)
print(df)
print("*****ON CSV FILE******")
df1 = pd.read_csv('..\Datasets\Crime_Data.csv')
details = pd.DataFrame(df1)
print("Pandas DataFrame:\n", df1)

# Check if 'Age' column exists
if 'Age' in df1.columns:
    print("selecting a column *AGE* from DataFrame:\n", df1['Age'], sep="")
else:
    print("Column 'Age' does not exist in the DataFrame")

# Check if 'City' column exists
if 'City' in df1.columns:
    print("selecting a column  *CITY* from DataFrame:\n", df1['City'], sep="")
    print("Column Deletion -  column *CITY*:\n")
    df1 = df1.drop('City', axis=1)
else:
    print("Column 'City' does not exist in the DataFrame")

print(df1)