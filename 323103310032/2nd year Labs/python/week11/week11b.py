from collections import OrderedDict

regular_dict = {}
regular_dict['apple'] = 3
regular_dict['banana'] = 5
regular_dict['cherry'] = 7

print("Regular Dictionary:")
for key, value in regular_dict.items():
    print(f"{key}: {value}")

ordered_dict = OrderedDict()
ordered_dict['apple'] = 3
ordered_dict['banana'] = 5
ordered_dict['cherry'] = 7

print("\nOrderedDict:")
for key, value in ordered_dict.items():
    print(f"{key}: {value}")

ordered_dict['date'] = 2
print("\nOrderedDict after adding a new item:")
for key, value in ordered_dict.items():
    print(f"{key}: {value}")

ordered_dict['apple'] = ordered_dict.pop('apple')
print("\nOrderedDict after moving 'apple' to the end:")
for key, value in ordered_dict.items():
    print(f"{key}: {value}")
