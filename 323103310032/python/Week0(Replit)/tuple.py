#Tuple and its methods
#create the tuple
student = ("Charan", 32, "CSE", 20)
print(student)
#len of the tuple
print(len(student))
#count the element
print(student.count(32))
#index of the element
print(student.index("CSE"))
#slice the tuple
print(student[0:2])
#reverse the tuple
print(student[::-1])
#clear the tuple
student.clear()