

#include<iostream>
using namespace std;

int factorial(int num)
{

	if(num == 1 || num == 0)
		return 1;
	
	int fact = num * factorial(num-1);
	
	return fact;

}


int main()
{
	int num;
	cout<<"Enter any number :- ";
	cin>>num;

	int fact = factorial(num);
	cout<<"The factorail of "<< num << " is "<< fact <<endl;
	return 0;
}
