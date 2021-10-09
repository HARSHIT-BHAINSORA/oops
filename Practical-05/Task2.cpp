#include<iostream>
using namespace std;

void charfunc()
{
	char c = 'l';
	cout<<c<<endl;
	cout<<sizeof(c)<<endl;
	cout<<"Size of char is : " << sizeof(char)<<endl;
}

void boolfunc()
{
	bool a = (10 > 9);
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of bool is :" << sizeof(bool)<<endl;
}

void shortfunc()
{
	short a =100; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of short is :"<<sizeof(short)<<endl;
}

void intfunc()
{
	int a =193; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of int is :"<<sizeof(int)<<endl;
}

void longfunc()
{
	long a =14; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of long is :"<<sizeof(long)<<endl;
}

void floatfunc()
{
	float a =10.5f; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of float is :"<<sizeof(float)<<endl;
}

void doublefunc()
{
	double a =10.29; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of double is :"<<sizeof(double)<<endl;
}

void longdoublefunc()
{
	long double a =10.6L; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of long double is :"<<sizeof(long double)<<endl;
}

void widecharfunc()
{
	wchar_t a =L'0'; 
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of widechar is :"<<sizeof(wchar_t)<<endl;
}

int main()
{
	charfunc();
	boolfunc();
	shortfunc();
	intfunc();
	longfunc();
	floatfunc();
	doublefunc();
	longdoublefunc();
	widecharfunc();
}



