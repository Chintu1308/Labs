from collections import namedtuple

Person = namedtuple('Person', ['name', 'age', 'city'])
person1 = Person(name='Alice', age=30, city='New York')

print("Accessing fields:")
print("Name:", person1.name)
print("Age:", person1.age)
print("City:", person1.city)

person_data = ['Bob', 25, 'Los Angeles']
person2 = Person._make(person_data)
print("\nCreated using _make():")
print("Person2:", person2)

person_dict = person2._asdict()
print("\nConverted to OrderedDict using _asdict():")
print("Person2 as dict:", person_dict)

person3 = person2._replace(age=26)
print("\nPerson2 after modifying age using _replace():")
print("Person3:", person3)
