#Write a python program to understand the use of else and finally block with try block.
try:
    # Code that may raise an exception
    # ...
    print("Try block executed successfully")
except Exception as e:
    # Code to handle the exception
    # ...
    print("Exception occurred:", str(e))
else:
    # Code to execute if no exception is raised
    # ...
    print("No exception occurred")
finally:
    # Code that will always execute, regardless of whether an exception occurred or not
    # ...
    print("Finally block executed")