/*Write a C++ program to check if a given integer is even, odd, or neither (0). The program should take an integer
 as input and determine its parity.*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(a==0){
        cout<<"Neither "<<endl;
    }
    else{
        if(a%2==0){
            cout<<"Even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }
    }
    return 0;
}