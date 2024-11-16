# Single Inheritance
class Parent:
    def __init__(self):
        self.name = "Parent"

    def show(self):
        print(f"This is the {self.name} class.")

class Child(Parent):
    def __init__(self):
        super().__init__()
        self.name = "Child"

# Multiple Inheritance
class Father:
    def __init__(self):
        self.father_name = "Father"

    def show_father(self):
        print(f"This is the {self.father_name} class.")

class Mother:
    def __init__(self):
        self.mother_name = "Mother"

    def show_mother(self):
        print(f"This is the {self.mother_name} class.")

class ChildMultiple(Father, Mother):
    def __init__(self):
        Father.__init__(self)
        Mother.__init__(self)
        self.name = "Child of Multiple Inheritance"

# Multilevel Inheritance
class Grandparent:
    def __init__(self):
        self.name = "Grandparent"

    def show(self):
        print(f"This is the {self.name} class.")

class ParentMulti(Grandparent):
    def __init__(self):
        super().__init__()
        self.name = "ParentMulti"

class ChildMulti(ParentMulti):
    def __init__(self):
        super().__init__()
        self.name = "ChildMulti"

# Hierarchical Inheritance
class ParentHierarchical:
    def __init__(self):
        self.name = "ParentHierarchical"

    def show(self):
        print(f"This is the {self.name} class.")

class Child1(ParentHierarchical):
    def __init__(self):
        super().__init__()
        self.name = "Child1"

class Child2(ParentHierarchical):
    def __init__(self):
        super().__init__()
        self.name = "Child2"

# Hybrid Inheritance
class Base:
    def __init__(self):
        self.name = "Base"

    def show(self):
        print(f"This is the {self.name} class.")

class Derived1(Base):
    def __init__(self):
        super().__init__()
        self.name = "Derived1"

class Derived2(Base):
    def __init__(self):
        super().__init__()
        self.name = "Derived2"

class HybridChild(Derived1, Derived2):
    def __init__(self):
        Derived1.__init__(self)
        Derived2.__init__(self)
        self.name = "HybridChild"

# Testing the inheritance
print("Single Inheritance:")
single = Child()
single.show()

print("\nMultiple Inheritance:")
multiple = ChildMultiple()
multiple.show_father()
multiple.show_mother()

print("\nMultilevel Inheritance:")
multi = ChildMulti()
multi.show()

print("\nHierarchical Inheritance:")
hierarchical1 = Child1()
hierarchical1.show()

hierarchical2 = Child2()
hierarchical2.show()

print("\nHybrid Inheritance:")
hybrid = HybridChild()
hybrid.show()
