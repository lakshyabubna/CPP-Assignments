/*Write a C++ program to calculate the area of a rectangle and a triangle by using an abstract class. An abstract
class contains at least one pure virtual function and cannot be instantiated.*/

#include<iostream>
using namespace std;
class Shape{                        //it is a abstract class as it hhas purely virtual function only
    public:
    virtual int area()=0;       
};

class Rectangle: public Shape {     
    private:
    int length;
    int width;
    public:
     void setvalues(int l, int w){          //it will set the values of length and width
        length=l;
        width=w;
    }
    int area(){
        return length * width;              //formlua for area of rectangle
    }
};

class Triangle: public Shape{
    private:
    int base;
    int height;
    public:
    void setvalues(int b, int h){       
        base=b;
        height=h;
    }
    int area(){
        return (base * height)/2;           //formula for area of triangle
    }
};

int main(){
    Rectangle S;                            //this object will call the function of the respective class
    int l,w;
    cout<<"Enter length and width of the rectangle: "<<endl;
    cin>>l>>w;
    S.setvalues(l,w);                                       //it will provide the value to area to calculate 
    cout<<"Area of the rectangle: "<<S.area()<<endl;
    Triangle A;                             //this object will call the function of the respective class
    int b,h;
    cout<<"Enter base and height of the triangle: "<<endl;
    cin>>b>>h;
    A.setvalues(b,h);
    cout<<"Area of the triangle: "<<A.area()<<endl;
    return 0;
}
