import pandas as pd

# Creating DataFrames for demonstration
df1 = pd.DataFrame({
    'ID': [1, 2, 3, 4],
    'Name': ['Alice', 'Bob', 'Charlie', 'David']
})

df2 = pd.DataFrame({
    'ID': [3, 4, 5, 6],
    'Age': [23, 34, 45, 56]
})

df3 = pd.DataFrame({
    'ID': [1, 2, 3, 4],
    'City': ['New York', 'Los Angeles', 'Chicago', 'Houston']
})

# 1. Merging DataFrames
merged_df = pd.merge(df1, df2, on='ID', how='inner')
print("Merged DataFrame (inner join on 'ID'):\n", merged_df)

# 2. Joining DataFrames using index
df4 = df1.set_index('ID')
df5 = df3.set_index('ID')
joined_df = df4.join(df5, how='left')
print("\nJoined DataFrame (left join on index):\n", joined_df)

# 3. Concatenating DataFrames
concatenated_df = pd.concat([df1, df3], axis=0, ignore_index=True)
print("\nConcatenated DataFrame (vertical stack):\n", concatenated_df)
