/*Write a C++ program to demonstrate integer exception and character exception. The program should handle exceptions 
for both invalid integer and character inputs.*/

#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int a;
    char b;
    try{
        cout<<"Enter integer"<<endl;
        cin>>a;
        if(cin.fail()){
            throw 0;
        }
    }
    catch(int){
        cout<<"integer not entered"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
    }
    
    try{
        cout<<"Enter character"<<endl;
        cin>>b;
        if(!isalpha(b)){
            throw 'E';
        }
    }   
    catch(char){
        cout<<"character not entered"<<endl;
    }
    return 0;
}