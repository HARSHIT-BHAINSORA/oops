#include<iostream>
using namespace std;

int main()
{	
	int temp;
	
	int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9}};
	for(int i = 0 ; i <= 3/2 ; i++)
	{	
		if(i != 2-i)
		{
		    for(int j = 0 ; j < 3 ;j++)
			{
				temp = arr[i][j];
				arr[i][j] = arr[2-i][2-j];
				arr[2-i][2-j] =temp;
			}
		}	
	
		else
		{
			for(int j = 0 ; j <3/2 ; i++)
			{
				temp = arr[i][j];
				arr[i][j] = arr[2-i][2-j];
				arr[2-i][2-j] = temp;
			}
		}
	}
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0; j < 3 ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}
	
