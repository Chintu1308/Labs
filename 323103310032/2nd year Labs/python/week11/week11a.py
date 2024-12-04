from collections import Counter

list_data = [1, 2, 2, 3, 3, 3, 4]
counter_from_list = Counter(list_data)
print("Counter from list:", counter_from_list)

string_data = "assassination"
counter_from_string = Counter(string_data)
print("Counter from string:", counter_from_string)

dict_data = {'a': 3, 'b': 2, 'c': 5}
counter_from_dict = Counter(dict_data)
print("Counter from dictionary:", counter_from_dict)

counter_from_kwargs = Counter(a=2, b=3, c=1)
print("Counter from keyword arguments:", counter_from_kwargs)

empty_counter = Counter()
empty_counter.update([1, 2, 2, 3])
empty_counter.update({'a': 1, 'b': 2})
print("Updated Counter:", empty_counter)

tuple_data = (1, 2, 2, 3, 3, 3, 4)
counter_from_tuple = Counter(tuple_data)
print("Counter from tuple:", counter_from_tuple)

new_counter = Counter(counter_from_list)
new_counter.update({'b': 1, 'c': 2})
print("Counter from another Counter:", new_counter)
