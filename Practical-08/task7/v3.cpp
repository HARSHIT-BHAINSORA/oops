#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
 	*b =temp;

	
}



int main()
{
	int a = 10 ; 
	int b = 20 ; 

	cout<<"Before calling function";	
	cout<<" a = " << a <<" " <<" b = " << b<<endl;
	
	swap(&a , &b);

	cout<< "After calling function";
	cout<<" a = " << a <<" " <<" b = " << b<< endl;
	
	return 0;
}
	
