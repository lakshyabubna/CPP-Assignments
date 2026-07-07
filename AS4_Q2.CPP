/*Write a C++ program to create a calculator that takes two numbers and a mathematical operator (+,-,*,/,^)
as input from the user, and prints the result of the operation. The mathematical operations should be wrapped inside of 
functions.*/

#include<iostream>
using namespace std;
float add(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    if(b==0){
        cout<<"not defined. please enter a different number"<<endl;
        exit(0);
    }else{
    return a/b;
    }
}
float power(float a, float b){
    float i,j=1;
    for(i=0;i<b;i++){
    j=j*a;
    }
    return j;
}int main(){
    float a,b;
    char op;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"enter operator"<<endl;
    cout<<"addtion(+),subtraction(-),divide(/),multiplication(*),power(^)"<<endl;
    cin>>op;
    if(op=='+') cout<<add(a,b)<<endl;
    if(op=='-') cout<<subtract(a,b)<<endl;
    if(op=='/') cout<<divide(a,b)<<endl;
    if(op=='*') cout<<multiply(a,b)<<endl;
    if(op=='^') cout<<power(a,b)<<endl;
    return 0;
}
