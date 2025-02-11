// Write a program that demonstrates virtual, static functions 


#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
    static void display() {
        cout << "Base class static display()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
    static void display() {
        cout << "Derived class static display()" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived dObj;
    basePtr = &dObj;
    basePtr->show(); 
    Base::display();
    Derived::display();
    return 0;
}