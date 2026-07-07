/*Write a C++ program to find the perfect numbers between 1 and 500. A perfect number is a number that
 is equal to the sum of its proper divisors (excluding itself). The program should output all perfect
  numbers between 1 and 500.*/
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"The perfect numbers between 1 to 500 are: "; //requirement for code
    for(i=1;i<=500;i++){                                //to check every digit from 1 to 500

        sum=0;                                          //so that sum does not compound from previous loop

        for(n=1;n<i;n++){                               //i can be checked against every digit less than it

            if(i % n==0){                               // 0 remainder means divisor
                sum=sum+n;                              // check for perfect number
            } 

        }

        if(sum==i){                                      // perfect number
            cout<<i<<" ";
        }

    }
    return 0;
}