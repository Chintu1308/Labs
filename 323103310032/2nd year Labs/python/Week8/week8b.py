from itertools import groupby

# List of dictionary items representing people's names and their ages
people = [
    {"name": "Alice", "age": 25},
    {"name": "Bob", "age": 30},
    {"name": "Charlie", "age": 25},
    {"name": "David", "age": 30},
    {"name": "Eve", "age": 35},
    {"name": "Frank", "age": 25}
]

# Sorting the list of people by age to ensure groupby works correctly
people.sort(key=lambda person: person["age"])

# Using groupby to group people by their age
grouped_people = groupby(people, key=lambda person: person["age"])

# Displaying each age group and the people in that group
for age, group in grouped_people:
    print(f"Age group: {age}")
    for person in group:
        print(f"  {person['name']} (age {person['age']})")