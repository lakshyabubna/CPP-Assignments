/*Write a C++ program to create a simple calculator using the switch statement. The calculator should allow the user
 to perform basic arithmetic operations (addition, subtraction, multiplication, division). The program should prompt 
the user to choose an operation, and then input the numbers to be calculated.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    do{
    cout<<"choose a operator"<<endl;
    cout<<"1.ADITTION"<<endl<<"2.SUBTRACTION"<<endl<<"3.MULTIPLICATION"<<endl<<"4.DIVISION"<<endl<<"5.exit"<<endl;
    cin>>choice;
    if(choice==5){
        cout<<"thankyou!";
        return 0;
    }
    if(choice>=1 && choice<=4){
    cout<<"enter 1st number"<<endl;
    cin>>a;
    cout<<"enter 2nd number"<<endl;
    cin>>b;
    switch(choice)
    {
    case 1:
    cout<<"answer is "<<a+b<<endl;
    break;
    case 2:
    cout<<"answer is "<<a-b<<endl;
    break;
    case 3:
    cout<<"answer is "<<a*b<<endl;
    break;
    case 4:
    if(b==0){
        cout<<"Division by zero not allowed"<<endl;
    }else{
        cout<<"answer is "<<a/b<<endl;
    }
    break;
    default:
    cout<<"wrong choice entered"<<endl;
    break;
    }
}
else{
    cout<<"wrong choice entered"<<endl;
}
    }while(choice!=5);
    return 0;
}