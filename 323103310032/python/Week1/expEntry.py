class Course(Exception):
    pass
compu = ['CSE','CSM','CSD','IT']
roll = int(input("Enter roll number: "))
name = input("Enter your name: ")
branch = input("Enter your branch: ")
branch=branch.upper()
if branch in compu:
    print("Congratulations", name, ", you are Welcome to the world of computers")
else:
    raise Course("Students from non computers barnch are not allowed")