/*Write a C++ program that asks for two numbers, compares them, and shows the maximum. Declare a
 function called max_two that compares the numbers and returns the maximum.*/

#include<iostream>
using namespace std;

float max_two(float a, float b){
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
}

int main(){
    float a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    max_two(a,b);
    return 0;
}