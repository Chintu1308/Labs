try:
    x = int("hello")
    y = "Hello"
    print(x+y)
except ValueError:
    print("Value Error Handled")
else:
    print("Exception Handeled")