/*Similarly, for Question 2, make the required corrections to the provided code. Once the code is working as expected,
please share the corrected code along with screenshots showing the output.*/

#include<iostream>
using namespace std;

class Base
{
    protected:              //changed access specifier from private to protected
    int data1, data2;

    public:
    Base(int a=0, int b=0): data1(a), data2(b)
    {

    }
};

class Derived: public Base
{
    public:
    void show()
    {
        cout<<" data1 = "<<data1<<" data2 = "<<data2;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
} 