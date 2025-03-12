//  Write a program to create a generic template for adding two integers and two float values and make use of the template to perform addition.

#include <iostream>
#include <conio.h>
using namespace std;

template <class t>
t Sum(t a, t b){
    return a + b;
}

int main() {
    system("cls");
    cout << "Sum of integers: " << Sum(5, 9) << endl;
    cout << "Sum of floats: " << Sum(1.1, 2.2) << endl;
    cout << "Sum of boolean: " << Sum(true, false) << endl;
    cout << "Sum of char: " << Sum('!', '/') << endl;
    return 0;
}