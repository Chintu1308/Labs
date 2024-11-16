class InvalidAge(Exception):
    pass
age = int(input("Enter your age(Years): "))
if age<0:
    raise InvalidAge("Invalid Age")
elif age < 18:
    raise InvalidAge("You are not eligible to Vote")
else:
    print("You are eligible to Vote")
