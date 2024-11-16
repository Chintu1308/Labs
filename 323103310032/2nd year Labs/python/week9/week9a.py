class person:
    def __init__(self, name, age, weight, height):
        self.name = name
        self.age = age
        self.weight = weight
        self.height = height
    def get_bmi_results(self):
        BMI = self.weight / (self.height * self.height)
        print("BMI is: ", str(BMI))
        if BMI < 1.85:
            return "Underweight"
        elif BMI >= 1.85 and BMI < 2.49:
            return "Normal"
        elif BMI >= 2.5 and BMI < 2.99:
            return "Overweight"
        else:
            return "Obese"

a = input("Enter your name: ")
b = int(input("Enter your age: "))
c = float(input("Enter your weight: "))
d = float(input("Enter your height: "))
p1 = person(a, b, c, d)
print(p1.get_bmi_results())
        
