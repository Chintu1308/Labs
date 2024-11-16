import pandas as pd

# Create a Pandas Series with labels
data = [10, 20, 30]
labels = ['a', 'b', 'c']
series = pd.Series(data, index=labels)
print("Pandas Series with labels:\n", series)

# Create a Pandas Series from a dictionary
data_dict = {'a': 10, 'b': 20, 'c': 30}
series_from_dict = pd.Series(data_dict)
print("Pandas Series from dictionary:\n", series_from_dict)