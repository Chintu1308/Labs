// Create multiple objects for the class and observe the order in which constructors and destructors are called. 


#include<iostream>
using namespace std;
class Base{
    public:
        int a;
        Base(int a){
            this->a=a;
            cout<<"constructor"<<a<<endl;
        }
        ~Base(){
            cout<<"destructor"<<a<<endl;
        }
};
int main(){
    Base b1(1),b2(2),b3(3);

}