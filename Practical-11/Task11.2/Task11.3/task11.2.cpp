#include<iostream>
using namespace std;

class Mammals
{
    public:
            void mammalsAnimal()
            {
                cout<< "I am Mammal ..." <<endl;
            }
};

class MarineAnimals
{
    public:
            void marineAnimals()
            {
                cout<< "I am MarineAnimal ..." <<endl;
            }
};

class BlueWhale : public Mammals , public MarineAnimals
{
    public:
            void blueWhaleAnimals()
            {
                cout<<"I belong t both the categories : Mammals as well as MarineAnimals...";
            }
};

int main()
{
    Mammals m;
    MarineAnimals ma;
    BlueWhale b;
    m.mammalsAnimal();  // 1
    ma.marineAnimals(); //2 
    b.blueWhaleAnimals(); //3
    b.mammalsAnimal(); // 4
    b.marineAnimals();

    return 0;
}