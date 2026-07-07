/*Write a C++ program to define a function that checks whether a person is eligible to vote. A person is
 eligible to vote if his/her age is greater than or equal to 18.*/

#include<iostream>
using namespace std;

void vote_eligiblity(int);

int main(){
    int age;
    cout<<"enter age of a person"<<endl;
    cin>>age;
    vote_eligiblity(age);
    return 0;
}

void vote_eligiblity(int x){
    if(x>=18){
        cout<<"yes! the person is eligible to vote.";
    }
    else{
        cout<<"no! the person is not eligible to vote.";
    }
}