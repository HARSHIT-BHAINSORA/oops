#include<iostream>
using namespace std;

namespace s1
{
	void add(int a , int b)
	{
		cout<<"Sum is = " << a+b << endl;
	}
}

namespace s2
{
	void add(float a , float b)
	{
		cout<<"Sum is = " << a+b << endl;
	}
}

using namespace s1;

int main()
{
	// add( 2 ,4);
	//add(1.7f , 5.3f);
	add(2 , 2.5f);
	//add(0,0);
	//add(2.4 , 0);
}

