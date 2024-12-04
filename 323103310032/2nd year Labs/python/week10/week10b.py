from abc import ABC, abstractmethod
class Animal(ABC):
    def __init__(self, name):
        self.name = name

    @abstractmethod
    def speak(self):
        pass

    def eat(self):
        print(f"{self.name} is eating")

class Tiger(Animal):
    def __init__(self, name, behavior):
        super().__init__(name)
        self.behavior = behavior

    def eat(self):
        return f"{self.name} is {self.behavior}"
    
    def speak(self):
        return "Roar"
    
x = Tiger("Booga", "Hunter")
print(x.speak())
print(x.eat())



    


