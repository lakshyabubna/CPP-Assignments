/*Write a C++ program to find the Greatest Common Divisor (GCD) of two numbers. The program should take two integers as
input and output their GCD.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    //Euclidean algorithm:-gcd(a,b)=gcd(b,a%b), if a%b becomes zero b is gcd of a,b.
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    cout<<"gcd= "<<a;
}