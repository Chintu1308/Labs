// Write a program that demonstrates default arguments 

#include<iostream>
using namespace std;
void defaultPara(int a, int b, int c=0, int d=0){
    cout << "a: " << a <<", b: " << b << ", c: " << c << ", d: " << d << endl;
}

int main(){
    int a,b,c,d;
    cout<<"Enter 4 integers: ";
    cin >> a >> b >> c >> d;
    defaultPara(a,b);
    defaultPara(a,b,c);
    defaultPara(a,b,c,d);
    return 0;
}