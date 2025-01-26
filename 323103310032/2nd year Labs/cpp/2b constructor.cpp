// Write a program to illustrate default constructor, parameterized constructor and copy constructor, destructors for a class 

#include <iostream>
using namespace std;

class Demo{
    public:
    int value;
        Demo(){
            value = 100;
            cout << "Default constructor called" << endl;
        }
        Demo(int a){
            value = a;
            cout << "Parameterized constructor called"<< endl;
        }
        Demo(const Demo &obj){
            value = obj.value;
            cout << "Copy constructor called" << endl;
        }
        ~Demo(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    Demo d1;
    Demo d2(200);
    Demo d3 = d1;
    return 0;
}