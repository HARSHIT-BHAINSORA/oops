// Class and Object

#include<iostream>
using namespace std;

class Student
{	
	private:
		string name;		
		int rno;
		long int phno;
		string address;
	public:
		void assign(string name,int rno,long int phno,string address)
		{
			this->name = name;
			this->rno = rno;
			this->phno = phno;
			this->address = address;
		}
		
		void print()
		{
			cout<<this->name<<endl;
			cout<<this->rno<<endl;
			cout<<this->phno<<endl;
			cout<<this->address<<endl;

		}
};



int main()
{
	Student sam;
	Student john;
		
	sam.assign("Sam",22,932583492,"Goa");
	john.assign("John",45,923243784,"Almora");

	sam.print();
	john.print();

	return 0;
}
	












