/*Write a C++ program to demonstrate the use of Structures. Create a structure to store information about a student, 
such as name, age, and grade. Then, initialize and display the information of at least two students.*/

#include<iostream>
using namespace std;

struct Student{                 //structure created
    string name;
    int age;
    char grade;
};
int main(){
    int n;
    cout<<"enter number of students"<<endl;
    cin>>n;
    cin.ignore();                   //to ignore enter as getline will read it
    Student s[n];                   //user can input as much data he wants
    for(int i=0 ; i<n ; i++){
        cout<<"enter name of the student "<<i+1<<endl;     //i+1 is there to start the counting of student from 1
        getline(cin,s[i].name);
        cout<<"enter age of the student "<<i+1<<endl;
        cin>>s[i].age;
        cout<<"enter grade of the student "<<i+1<<endl;
        cin>>s[i].grade;
        cin.ignore();
    }
    for(int j=0;j<n;j++){           //to display the data put by the user
    cout<<"Student "<<j+1<<endl;
    cout<<"Name: "<<s[j].name<<endl;
    cout<<"Age: "<<s[j].age<<endl;
    cout<<"Grade: "<<s[j].grade<<endl;
    }
    return 0;
}