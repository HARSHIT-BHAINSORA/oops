// Difference between Class and Struct

#include<iostream>
using namespaces std;

class College
{
	int x, // By default x is private.

	public:
		void print() // member function are available
		{
			cout<<"Hello everone";
		}
};

struct Student
{
	int a; // By default a is public.

	// here no function are decleared.
};


int main()
{
	College t;
	Student s;

	t.x = 20; // throw an error.
	y.a = 30; // it will work.

	return 0;
}

