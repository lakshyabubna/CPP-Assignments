/*Write a C++ program to check whether a given character is contained in a string or not and find its position.
The program should ask for a string and a character input from the user, then output whether the character          
exists in the string and its position (if it exists).*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,found=0,index;
    string user;
    char ch;
    cout<<"enter string"<<endl;
    cin>>user;                                  //input from user for string
    cout<<"enter character"<<endl;
    cin>>ch;                                    //input from user for character
    for(i=0;i<user.length();i++){
        if(ch==user[i]){
           found++;                             //found will increase if match is found
           index=i;                             //it will save the value of i a=at exact pontof index
           break;                  //if a character repeats in the string it help to save index at first occurrance
        }                                   
    }if(found>0){
        cout<<"character is found and its index is = "<<index<<endl;
    }else{
        cout<<"character does not exist in string"<<endl;
    }
    return 0;
}