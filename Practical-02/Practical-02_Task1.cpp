#include<iostream>
using namespace std;

void check_prime(int num)
{
	int flag = 0;

	for(int i = 2 ; i <= num/2 ; i++)
	{
		if(num % i == 0)
		{	
			flag++;
			break;
		}
	}
	if(flag == 0)
		cout<< "This is the Prime number = " <<num << endl;
	else	
		cout<<num <<" Not a prime number"<<endl;
}
		
int main()
{
	int num ; 
	cout<<"Enter the any number :-";
	cin>>num;
	
	check_prime(num);
return 0;
}
	

