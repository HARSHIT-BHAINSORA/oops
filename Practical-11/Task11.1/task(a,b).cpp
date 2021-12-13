#include<iostream>
using namespace std;

class Parent 
{
    public: 
        int k = 10;

        void family()
        {
            cout<<"Value of K is = "<<k<<endl;
        }
};

class Child : public Parent 
{
    public:
            void display()
            {
                cout << " Value of k is " << k; // without creating object .
            }
};


int main()
{
    Child c;
    c.family(); // with Creating object of child class
    c.display();
}