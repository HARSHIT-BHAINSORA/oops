#include<iostream>
using namespace std;

namespace s1
{
	int add(int a , int b)
	{
		return (a+b);
	}
}

namespace s2
{
	float add (float a , float b)
	{
		return (a+b);
	}
}

int main()
{
	cout<<"Sum is = " << s1 :: add(1,2)<<endl;
	cout<<"Sum is = " << s2 :: add(1.6,2.7)<<endl;
	cout<<"Sum is = " << s2 :: add(1, 2.5)<<endl;
	cout<<"Sum is = " << s1 :: add(1 , 2.6)<<endl;

}
