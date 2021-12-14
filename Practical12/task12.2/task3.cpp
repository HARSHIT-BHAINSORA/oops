#include<iostream>
using namespace std;

class A
{   int k;
    public :
            A(int x)
            {
                k = x;
                cout << k <<" " << endl;
            }
};

class B : public A
{
    int b ;
    public : 
            B(int y) : A(y) 
            {
                b = y;
                cout << y <<" " <<endl;
            }
};

int main()
{
    B objb(4);

    return 0;
}