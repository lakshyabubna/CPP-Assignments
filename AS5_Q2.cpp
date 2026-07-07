/*Write a C++ program to find the reverse of a number using a class. Create a class with a member function to reverse 
a number entered by the user.*/

#include<iostream>
using namespace std;

class Reverse{                  //class created
    public:
    void reverse(int n){        //function that won't return a value
        int i,j;
        cout<<"the reverse of the number is: ";
        while(n!=0){
            i=n%10;
            n=n/10;
            cout<<i;
        }
    }
};
int main(){
    Reverse rev;                    //object created so we can call the member function
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    rev.reverse(n);                 //member function is called
}