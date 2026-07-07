/*Write a C++ program to count the number of vowels and consonants in a string. The program should take a string
input from the user and output the count of vowels and consonants in the string*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    int i,j,countv=0,countc=0,found=0;
    string user;
    cout<<"enter string"<<endl;
    getline(cin, user);                                                        //input from user for string
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};           //all vowels
    for(i=0;i<user.length();i++){
        found=0;                                            //to reset found value so it does not show fund>0 each time
       if(isalpha(user[i])){
        for(j=0;j<10;j++){
            if(vowel[j]==user[i]){
                found++;                                 //everytime vowel is found so we can fullfill if case ahead
            }
        }
           if(found>0){                                  //vowel found
            countv++;                                    //vowel counted
           }
        if(found==0){                                    //vowel not found
            countc++;                                    //consonant counted
        }
    }
    }
    cout<<"vowels = "<<countv<<endl;
    cout<<"consonants = "<<countc<<endl;
    return 0;
}