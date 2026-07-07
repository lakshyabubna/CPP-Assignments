/*Demonstrate operator overloading with the help of an example program. Operator overloading allows you to redefine 
the behavior of operators for user-defined types.*/
#include<iostream>
using namespace std;
class Operator_overloading{         //class created
    private:
    int value;
    public:
    void setvalue(int x);
    void display(void);
    Operator_overloading operator +(const Operator_overloading& k );        //everything same 
    Operator_overloading operator -(const Operator_overloading& k );        //except operator 
};
int main(){
    Operator_overloading a,b,c;         //object created
    a.setvalue(10);                     //(.) used for calling functions
    b.setvalue(20);
    c= a + b;
    c.display();
    c= a - b;
    c.display();
    return 0;
}
Operator_overloading Operator_overloading :: operator +(const Operator_overloading& k ){    //define function using scope
    Operator_overloading d;
    d.value = value + k.value;
    return d;
}
Operator_overloading Operator_overloading :: operator -(const Operator_overloading& k ){
    Operator_overloading d;
    d.value = value - k.value;
    return d;
}
void Operator_overloading :: setvalue(int x){
    value = x;
}
void Operator_overloading :: display(void){
    cout<<"answer is: "<<value<<endl;
}