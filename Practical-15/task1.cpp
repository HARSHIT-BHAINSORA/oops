// Read

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream myfile;
    string data;
    myfile.open("Demofile.txt");
    myfile>>data;'
    cout<<data<< endl;
    return 0;
}