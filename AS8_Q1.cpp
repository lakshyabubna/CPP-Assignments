/*Write a C++ program to demonstrate destructors. A destructor is a special member function that is 
automatically called when an object goes out of scope.*/

#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor is called"<<endl;
    }
    ~A(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){
    A obj;
    return 0;
}