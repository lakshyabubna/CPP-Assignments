/*Write a C++ program to demonstrate function overloading. Function overloading allows multiple functions with
the same name but different parameters.*/

#include<iostream>
using namespace std;

class Function_overloading{             //class created
    public:
    int sum(int, int);                  //function with same name but 
    double sum(double , double);        //different arguments hence,
    int sum(int, int, int);             //function overloading
};

int main(){
    Function_overloading obj;           //object created to call the functions from calss
    int a,b,e,f,g;
    double c,d;
    cout<<"enter 1st two integers"<<endl;
    cin>>a>>b;
    cout<<"Sum of two integers: "<<obj.sum(a,b)<<endl;
    cout<<"enter two doubles"<<endl;
    cin>>c>>d;
    cout<<"Sum of two doubles: "<<obj.sum(c,d)<<endl;
    cout<<"enter three integrs"<<endl;
    cin>>e>>f>>g;
    cout<<"Sum of three integers: "<<obj.sum(e,f,g)<<endl;
    return 0;
}

int Function_overloading :: sum(int a, int b){          // using scope to define function outside class
    return a+b;
}
double Function_overloading :: sum(double c, double d){
    return c+d;
}
int Function_overloading :: sum(int e, int f, int g){
    return e+f+g;
}