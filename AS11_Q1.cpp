/*Write a C++ program that returns the starting locations of a substring using pointers. The program should 
search for all occurrences of a substring within a given string and return the starting positions using pointers.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string super;
    string sub;
    cout<<"Enter main string: ";
    getline(cin,super);

    cout<<"Enter substring: ";
    getline(cin,sub);

    char *p = &super[0];
    char *q = &sub[0];

    bool found = false;
    while(*p != '\0'){
        char *temp1=p;
        char *temp2=q;
        while(*temp1==*temp2 && *temp2 != '\0' && *temp1 != '\0'){
            temp1++;
            temp2++;
        }
        if(*temp2 == '\0'){
            if(found==false){
                cout<<"Starting positions of substring '"<<sub<<"':"<<endl;
            }
        found = true;
        cout<<"Position "<<p-&super[0] <<endl;
        }
        p++;
    }
    if(found == false){
        cout<<"sub string is not a part of main string"<<endl;
    }
    return 0;
}