#include<iostream>
using namespace std;

// Parent class
class Parent {
public:
    void display() {
        cout << "Parent class display function" << endl;
    }
};

// Single Inheritance
class SingleChild : public Parent {
public:
    void show() {
        cout << "Single Child class show function" << endl;
    }
};

// Multiple Inheritance
class AnotherParent {
public:
    void print() {
        cout << "Another Parent class print function" << endl;
    }
};

class MultipleChild : public Parent, public AnotherParent {
public:
    void reveal() {
        cout << "Multiple Child class reveal function" << endl;
    }
};

// Multilevel Inheritance
class IntermediateChild : public Parent {
public:
    void interFunction() {
        cout << "Intermediate Child class function" << endl;
    }
};

class MultilevelChild : public IntermediateChild {
public:
    void multilevelFunction() {
        cout << "Multilevel Child class function" << endl;
    }
};

// Hierarchical Inheritance
class HChild1 : public Parent {
public:
    void hFunction1() {
        cout << "Hierarchical Child class 1 function" << endl;
    }
};

class HChild2 : public Parent {
public:
    void hFunction2() {
        cout << "Hierarchical Child class 2 function" << endl;
    }
};

int main() {
    // Single Inheritance
    SingleChild sc;
    sc.display();
    sc.show();

    // Multiple Inheritance
    MultipleChild mc;
    mc.display();
    mc.print();
    mc.reveal();

    // Multilevel Inheritance
    MultilevelChild mlc;
    mlc.display();
    mlc.interFunction();
    mlc.multilevelFunction();

    // Hierarchical Inheritance
    HChild1 hc1;
    hc1.display();
    hc1.hFunction1();

    HChild2 hc2;
    hc2.display();
    hc2.hFunction2();

    return 0;
}
