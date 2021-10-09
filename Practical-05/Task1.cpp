#include<iostream>
using namespace std;

void charfunc()
{
	char c = 'g';
	cout<<c<<endl;
}

void boolfunc()
{
	bool a = (10 > 9);
	cout<<a<<endl;
}

void shortfunc()
{
	short a = 100;
	cout<<a<<endl;
}

void intfunc() 
{
	int a = 7;
	cout<<a<<endl;
}

void longfunc()
{
	long a =20;
	cout<< a <<endl;
}

void floatfunc()
{
	float x = 30.f;
	cout<< x <<endl;
}

void doublefunc()
{
	double y = 10.45;
	cout<<y << endl;
}

void longdoublefunc()
{
	long double a = 39.1L;
	cout<<a <<endl;
}

void widecharfunc()
{
	wchar_t a  = L'0';
	cout << a << endl;
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

  
