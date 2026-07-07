#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream my_file;
    my_file.open("student_info.txt");
    string name;
    int CLASS;
    int age;
    getline(my_file,name,',');
    my_file>>CLASS;
    my_file.ignore();
    my_file>>age;
    cout<<name<<",";
    cout<<CLASS<<",";
    cout<<age;
    return 0;
}