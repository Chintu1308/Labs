#ValuError
try:
    x=int("Python")
    y="Hello"
    print(x+y)

except ValueError:
    print("ValueError Found")

#IndexError
try:    
    arr=[2,3,4,5,6]
    print(arr[7])

except IndexError:
    print("Index Error")

#NameError
try:
    Q=10
    print(q)


except NameError:
    print("NameError handled")

#ZeroDivisionError
try: 
    x=5
    y=x/0
    print(y)

except ZeroDivisionError:
    print("ZeroDevisionError found")

#TypeError
try:
    x=5
    s="Hello"
    print(x+s)

except TypeError:
    print("TypeValue Error")
