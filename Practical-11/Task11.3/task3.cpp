#include<iostream>
using namespace std;

class A
{
    public :
            int k = 10 ;
};

class B
{
    public :
            int k = 20 ;
};

class C : public A , public B
{
    public :
            int k = 30 ;
};


int main()
{
    C obj;
    cout<<"Display C's k = " <<obj.k; // form Class C object.
    cout<<"Display A's k = " <<obj.A::k; // from Class C object accessing A 's k. 
    cout<<"Display B's k = " <<obj.B::k; // from Class C object accessing B 's k. 

    return 0;
}