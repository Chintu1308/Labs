from collections import ChainMap

dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}

chain = ChainMap(dict1, dict2)
print("Value of 'a':", chain['a'])
print("Value of 'b':", chain['b'])  
print("Value of 'c':", chain['c']) 

chain['a'] = 10 
chain['d'] = 5  
print("\nUpdated dict1:", dict1)
print("Updated dict2:", dict2)

del chain['a']  
print("\nDict1 after deleting 'a':", dict1)

dict3 = {'e': 6}
new_chain = chain.new_child(dict3)
print("\nNew ChainMap after adding dict3:")
for key, value in new_chain.items():
    print(f"{key}: {value}")
