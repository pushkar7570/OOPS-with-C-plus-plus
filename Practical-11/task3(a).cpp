// Diamond problem occurs when a child class inherits from two parent classes
// who both share a common grandparent child.
#include <iostream>
using namespace std;
class GrandParent{
    public:
    GrandParent(){
        cout << "Constructor of class GrandParent called" << endl; 
    }
};
class Parent_1 : public GrandParent{
    public:
    Parent_1(){
        cout << "Constructor of class Parent_1 called" << endl; 
    }
};
class Parent_2 : public GrandParent{
    public:
    Parent_2(){
        cout << "Constructor of class Parent_2 called" << endl; 
    }
};
class Child : public Parent_1 , public Parent_2{
    public:
    Child(){
        cout << "Constructor of class Child called" << endl; 
    }
};
int main()
{
    Child obj;
    return 0;
}
// As you can see here, on calling object of Child class constructor of GrandParent class
// is called twice , once when Parent_1 class object is created and again when Parent_2 class
// object is created. Hence this creates an ambiguity for the compiler to get values from which constructor.
