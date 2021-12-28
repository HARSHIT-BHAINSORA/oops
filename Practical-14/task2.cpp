// write

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("Demofile.txt");
    myfile<<"This is what a write in file... "<<endl;
    myfile.close();
}