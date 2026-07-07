/*Write a C++ program to demonstrate exception handling. The program should print 'Division by zero not possible' if someone 
tries to divide a number by 0.*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter numerator: ";
    cin>>a;
    cout<<"Enter denominator: ";
    cin>>b;
    try{
        if(b==0){
            throw 0;
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(int){
        cout<<"Division by zero not possible"<<endl;
    }
    return 0;
}