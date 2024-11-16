import pandas as pd
# Creating a Pandas DataFrame through csv file
print("*****FROM CSV FILE******")
df1 = pd.read_csv('..\Datasets\PythonLabCSVData.csv')
details = pd.DataFrame(df1)
print(details.describe())
print(details.head())
print(details.tail())
print(details.head(2))
print(details.tail(3))
print(details.info)

#Creating a Pandas DataFrame through excel file
print("*****FROM EXCEL FILE******")
df2 = pd.read_excel('..\Datasets\SamplePythonExcelFile.xlsx')
details2 = pd.DataFrame(df2)
print(details2.info)
print(details2.describe())
print(details2.head())
print(details2.tail())
print(details2.head(2))
print(details2.tail(3))