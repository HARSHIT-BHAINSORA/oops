// friend function

#include<iostream>
using namespace std;

class Student{
	private:
		string name ;
		int age;
		int marks;
	public:
		Student(string name , int age , int marks)
		{
			this->name = name;
			this->age = age;
			this->marks = marks;
		}

		friend int total_marks(Student s1 , Student s2 ,Student s3);
};


int total_marks(Student s1 , Student s2 , Student s3)
{
	return s1.marks+s2.marks+s3.marks;
}


int main()
{
	Student s1("Vinod",18,93) ;
 	Student s2("Otis",19,92) ;
	Student s3("Erick",17,90);
	int sum = total_marks(s1,s2,s3);
	cout<<sum<<endl;
}

		
