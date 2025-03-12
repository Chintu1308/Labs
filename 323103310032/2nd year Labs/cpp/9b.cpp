// How to pass two different types of parameters to the same function and using classes

#include <iostream>
#include <conio.h>
using namespace std;

template <class T1, class T2>
class A {
    T1 a;
    T2 b;
public:
    A(T1 x, T2 y) {
        a = x;
        b = y;
    }
    void sum() {
        cout << "sumition of the variables: " << a + b << endl;
    }
};

int main() {
    system("cls");
    A<int, double> obj1(5, 9.5);
    obj1.sum();
    
    A<float, int> obj2(1.1, 2);
    obj2.sum();
    
    A<bool, int> obj3(true, 2);
    obj3.sum();
    
    A<char, int> obj4('!', 8);
    obj4.sum();
    
    return 0;
}