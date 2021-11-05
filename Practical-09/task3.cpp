// functioning of static data members

#include<iostream>
using namespace std;

class Count
{
	static int a;
	
	public: 
		void count()
		{
			a +=1;
		}
		void print()
		{
			cout<<"The count of function call is "<< a << endl;
		}
		
};

int Count::a = 0;

int main()
{
	Count c1, c2 , c3 , p;
	c1.count();
	c2.count();
	c3.count();
	
	p.print();
	
	return 0;
}

	
