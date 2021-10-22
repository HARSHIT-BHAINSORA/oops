
#include<iostream>
using namespace std;

void factorial (int num)
{
	int fact = 1;
	
	for(int i = 1 ; i <= num ; i++)
	{
		fact = fact * i ; 
	}
	cout<<"The factorial of "<< num <<" is " <<fact <<endl;

}	

int main()
{
	int num;
	cout<<"Enter any number :- ";
	cin>>num;

	factorial(num);
	return 0;
}
