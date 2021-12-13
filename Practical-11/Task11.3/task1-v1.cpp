#include<iostream>
using namespace std;

class A{
    public : int a ;

    void displaya()
    {
        cout<< " Display fun of class A ... ";
    }
};

class B : public A
{
    public:
    void displayb()
    {
        cout<< " Display fun of class B ... "<<endl;
    }
};

class C : public A
{
    public:
    void displayc()
    {
        cout<< " Display fun of class C ... "<<endl;
    }
};

class D : public B , public C  
{
    public:
    void displayd()
    {
        cout<<"Display fun of class D... "<<endl;
    }
}; 

int main()
{
    D d;

    d.displaya();
    d.displayb();
    d.displayc();
    d.displayd();
    d.a=10;

    return 0;
}