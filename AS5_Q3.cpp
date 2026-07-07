/*Write a C++ program to find the factorial of a number using a class. Create a class with a member function that 
calculates the factorial of a given number.*/

#include<iostream>
using namespace std;
class Factorial{
    public:
    void factorial(int n){ 
        int j=1; 
        for(int i=1;i<=n;i++){
            j=j*i;
        }
        cout<<j;
    }
};
int main(){
    Factorial fact;
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    fact.factorial(n);
}