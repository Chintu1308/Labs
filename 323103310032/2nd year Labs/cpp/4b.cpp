// Write a program that demonstrates function overloading, operator overloading, overriding 

#include <iostream>
using namespace std;

class Base {
public:
    int base_var;
    void show() {
        cout << "Base class called" << endl;
        cout << "Base class variable: " << base_var << endl;
    }
    void show(int x) {
        cout << "Base class called with parameters" << endl;
        cout << "Base class variable: " << x << endl;
    }
    void operator+(int x) {
        base_var += x;
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
    void show(int x) {
        cout << "Derived class called" << endl;
        cout << "Base class variable: " << x << endl;
        cout << "Derived class variable: " << derived_var << endl;
    }
    void operator+(int x) {
        base_var += x;
        derived_var += x;
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
    bptr->show(500);
    dptr->show(600);
    bptr->operator+(100);
    dptr->operator+(200);
    bptr->show();
    dptr->show();
    return 0;
}