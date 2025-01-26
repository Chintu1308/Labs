// Write a program which uses function to swap two integers and two float numbers by using reference variables.

#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    float c,d;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two float numbers: ";
    cin >> c >> d;
    cout<<"Integer numbers before swapping: "<<a<<" "<<b<<endl;
    cout<<"Float numbers before swapping: "<<c<<" "<<d<<endl;
    swap(a,b);
    swap(c,d);
    cout<<"Swapped integer numbers: "<<a<<" "<<b<<endl;
    cout<<"Swapped float numbers: "<<c<<" "<<d<<endl;
    return 0;
}