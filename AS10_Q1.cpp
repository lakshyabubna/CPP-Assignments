/*Write a C++ program to store the Name, Class, and Age of a student in a text file. The program
should take the student's details as input and write them to a text file.*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string name;
    int CLASS;
    int age;
    cout<<"Enter student's name: ";
    getline(cin,name);
    cout<<"Enter student's class: ";
    cin>>CLASS;
    cout<<"Enter student's age: ";
    cin>>age;
    ofstream my_file;
    my_file.open("student_info.txt",ios::app);
    my_file<<name<<','<<'\t'<<CLASS<<','<<'\t'<<age;
    my_file.close();
    return 0;
}