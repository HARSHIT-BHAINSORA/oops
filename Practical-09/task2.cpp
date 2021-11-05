// task for multiple constructor intialization

#include<iostream>
using namespace std;

class Area
{	
	public:
		Area()
		{
		} 
					
		Area(int l , int b)
		{
			cout<<"The area of a rectangle is :-"<<(l*b)<<endl;
		}
		
		Area(int side)
		{
			cout<<"The area of a square is :-"<<(side*side)<<endl;
		}

};


int main()
{
	Area obj(5,4);
	Area obj1(4);
	
	return 0;
}
	
