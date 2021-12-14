// execution flow is from parent to child.
// calling flow is from child to parent.

#include <iostream>
using namespace std;

class A
{
    int a = 9;

public:
    A()
    {
        cout << "a";
    }
};

class B : public A
{
public:
    B() : A()  // linking
    {
        cout << "b";
    }
};

class C : public B
{
public:
    C() : B()  // linking 
    {
        cout << "c";
    }
};

int main()
{
    C obj;
}
