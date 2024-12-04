from collections import defaultdict

number_count = defaultdict(int)

number_count[1] += 1
number_count[2] += 2
number_count[3] += 3

print("Count for key 4 (non-existing):", number_count[4])
print("\nDefaultDict contents:")
for key, value in number_count.items():
    print(f"{key}: {value}")

word_groups = defaultdict(list)
word_groups['vowels'].extend(['a', 'e', 'i', 'o', 'u'])
word_groups['consonants'].append('b')

print("\nNon-existing group 'numbers':", word_groups['numbers'])
print("\nDefaultDict with lists:")
for key, value in word_groups.items():
    print(f"{key}: {value}")
