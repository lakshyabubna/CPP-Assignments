/*In this question, you are asked to correct the given code, ensuring that it functions properly. After making the 
necessary corrections, please share the updated code along with screenshots of the correct output.*/

#include<iostream>
using namespace std;

class Base
{

};

class Derived: public Base      //added the access specifier
{ 

};

int main()
{
    Base *bp = new Derived;
    Derived *dp = new Derived;                  //base class dosent have derived class so base was changed to derived
    cout<<"code executed successfully"<<endl;   //to check if the code is executed successfully
    return 0;                   
}