// execution flow is from child to parent.
// calling flow is from child to parent.

#include<iostream>
using namespace std;

class A
{
    public :
            ~A()
            {
                cout<<" A";
            }
};

class B : public A
{
    public :
            ~B()
            {
                cout<<" B ";
            }
};

class C : public B
{
    public :
            ~C()
            {
                cout<<" C";
            }
};

int main()
{
    C objc;
    
    return 0;
}