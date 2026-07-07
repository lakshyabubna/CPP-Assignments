/*Write a C++ program to find the first 10 natural numbers. The program should output the numbers from  1 to 10 as
shown in the sample output(sample output: the natural numbers are: 1 2 3 4 5 6 7 8 9 10)*/
#include<iostream>
using namespace std;
int main()
{
    int i;  
    cout<<"The natural numbers are: ";  //this will be printed brfore all natural numbers
    for(i=1;i<=10;i++){         //loop will give all the value of i from 1 to 10
        cout<<i<<" ";       //it will print i till the conditions in for loop is satisfied
    }
    return 0;
}