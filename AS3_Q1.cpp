/*Write a C++ program to print all the duplicates in the input string. The program should take a string 
input from the user and print any characters that appear more than once in the string.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    string user;                            
    cout<<"enter string"<<endl;                
    cin>>user;                                  //taking input from user
    int freq[256]={0};                          //due to ASCII code 
    for(i=0;i<user.length();i++){
        freq[user[i]]++;                        //to count frequency of each letter
    }
    for(i=0;i<user.length();i++){
        if(freq[user[i]]>1){                    //the letter which have frequency more than 1 are duplicate
            cout<<user[i]<<"  ";                //letter is printed
            freq[user[i]]=0;                    /*this will make the frequency of the printed letter 0 i.e,
                                                preventing the letter from getting print again*/
        }
    }
    return 0;
}
