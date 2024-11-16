import pandas as pd  #type: ignore
import numpy as np #type: ignore
data = {'a': [1, 2, 3, 4, 5], 'b': [10, 20, 30, 40, 50], 'c': [100, 200, 300, 400, 500]}
df = pd.DataFrame(data)
print("Original DataFrame:\n", df)
# print("First 3 rows of the DataFrame:\n")
# for i in range(4):
#     print("ROW ", i+1, ":\n", df.loc[i])
print("selecting a Row 2 from DataFrame:\n", df.loc[1] , sep="")
print("selecting a Row  3 from DataFrame:\n", df.loc[2] , sep="")
print("Row Addition A+B:\n")
new_row = {'a': 6, 'b': 60, 'c': 600}
df = df._append(new_row, ignore_index=True)
print(df)
print("Row Deletion -  Row 3 and Row 4:\n")
df = df.drop(2)
df = df.drop(3)
print(df)
print("*****ON CSV FILE******")
df1 = pd.read_csv('..\Datasets\Crime_Data.csv')
details = pd.DataFrame(df1, index = [1,2,3,4,5,6,7,8,9,10])
print("Pandas DataFrame:\n", df1 )
print("selecting a Row 2 from DataFrame:\n", df1.loc[1], sep="")
print("selecting a Row 5 from DataFrame:\n", df1.loc[4], sep="")
print("selecting a Row 7 from DataFrame:\n", df1.loc[6], sep="")
print("Row Deletion -  Rows 3,6,8:\n")
df1 = df1.drop(2)
df1 = df1.drop(5)
df1 = df1.drop(7)
print(df1)
print("\nAdding a new row to the DataFrame:\n")
new_row_csv = {'Name': 'Raj', 'Age': 22, 'City': 'Hyderabad'}
df1 = df1._append(new_row_csv, ignore_index=True)
print(df1)



