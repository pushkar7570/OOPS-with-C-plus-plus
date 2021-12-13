#include <iostream>
using namespace std;

class Mammal{
    public:
    void display(){
        cout<<"I am mammal\n";
    }
    
};

class MarineAnimal{
    public:
      void display(){
        cout<<"I am a marine animal\n";
    }
};

class BlueWhale : public Mammal , public MarineAnimal{
    public:
    void display(){
        cout<<"I belong to both the categories: Mammals as well as Marine Animals\n";
    }
};

int main()
{
    Mammal a;
    MarineAnimal b;
    BlueWhale c;
    
    a.display(); // task 1 , calling function of mammals using object of Mammal
    b.display(); // task 2 , calling function of marine animals using object of MarineAnimal
    c.display(); // task 3 , calling function of blue whale using object of BlueWhale
    c.Mammal::display(); // task 4 , calling function of mammals using object of BlueWhale
    c.MarineAnimal::display(); //task 4 , calling function of marine animals using object of BlueWhale
    return 0;
}
