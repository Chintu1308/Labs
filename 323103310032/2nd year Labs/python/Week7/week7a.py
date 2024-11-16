import pandas as pd

labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
data = [10, 20, 30, 40, 50, 60, 70]
series = pd.Series(data, index=labels)
print("Pandas Series:\n", series)
dataDict = {'a': 20, 'b': 28, 'c': 4, 'd': 57, 'e': 61}
seriesFromDist = pd.Series(dataDict)
print("Pandas Series from Dictionary:\n", seriesFromDist)
data = {
    'Name': ['Hari', 'Asha', 'Ravi', 'Priya', 'Vikram', 'Anita', 'Raj'],
    'Age': [25, 30, 35, 40, 45, 50, 55],
    'City': ['Mumbai', 'Delhi', 'Bangalore', 'Hyderabad', 'Chennai', 'Kolkata', 'Pune']
}
df = pd.DataFrame(data, index=[1, 2, 3, 4, 5, 6, 7])
print("Pandas DataFrame:\n", df)
print("Conversion of series to numpy array: ", series.to_numpy())
print("Conversion of dictionary series to numpy array: ", seriesFromDist.to_numpy())
print("Conversion of DataFrame to numpy array:\n", df.to_numpy())