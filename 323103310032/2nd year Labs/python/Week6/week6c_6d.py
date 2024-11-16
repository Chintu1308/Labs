import pandas as pd #type: ignore
# Creating a Pandas DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 30, 35],
    'City': ['New York', 'Los Angeles', 'Chicago']
}
df = pd.DataFrame(data)
print("Pandas DataFrame:\n", df)

# Creating a Pandas DataFrame through csv file
print("*****FROM CSV FILE******")
df1 = pd.read_csv('..\Datasets\Crime_Data.csv')
details = pd.DataFrame(df1)
print(details.describe())
print(details.head())
print(details.tail())
print(details.head(2))
print(details.tail(3))
print(details.info)
# Creating a Pandas DataFrame through json file
print("*****FROM JSON FILE******")
df2 = pd.read_json('..\Datasets\iris.json')
details2 = pd.DataFrame(df2)
print(details2.info)
print(details2.describe())
print(details2.head())
print(details2.tail())