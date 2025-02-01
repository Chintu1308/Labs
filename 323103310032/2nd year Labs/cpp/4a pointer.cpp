// Write a program to use pointers for both base and derived classes and call the member functions.

#include <iostream>
using namespace std;

class Base {
public:
    int base_var;
    void show() {
        cout << "Base class called" << endl;
        cout << "Base class variable: " << base_var << endl;
    }
   
};

class Derived : public Base {
public:
    int derived_var;
    void show() {
        cout << "Derived class called" << endl;
        cout << "Base class variable: " << base_var << endl;
        cout << "Derived class variable: " << derived_var << endl;
    }
};

int main() {
    Base b;
    Derived d;
    Base *bptr;
    Derived *dptr;
    bptr = &b;
    dptr = &d;
    bptr->base_var = 100;
    dptr->base_var = 200;
    dptr->derived_var = 300;
    bptr->show();
    dptr->show();
    return 0;
}