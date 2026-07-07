/*Write a C++ program to implement a linked list using list containers. The program should use the C++ Standard 
Library's list container to create a linked list, add elements, and display the elements*/

#include<iostream>
#include<list>
using namespace std;
void insert(list<int>& l);
void display(list<int>& l);

int main(){
    list<int> l;
    insert(l);
    display(l);
    return 0;
}
void insert(list<int>& l){
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
}
void display(list<int>& l){
    cout<<"Elements in the linked list:"<<endl;
    for( int x : l){
        cout<< x <<endl;
    }
}