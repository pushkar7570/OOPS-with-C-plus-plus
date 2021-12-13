#include <iostream>
using namespace std;

class Parent{
    public:
    int var = 10;//public variable of parent class
    void display(){
        cout<<"This is parent class , value of var="<<var;
    }
    
};

class Child : public Parent{
    public:
    int ch = var + 10; //public variable of child class using variable of parent class
    void disp(){
        cout<<"This is child class, value of ch = "<<ch<<" value of var = "<<var<<endl;
    }
};

int main()
{
    Child obj;
    cout<<"Value of var of parent class is = "<<obj.var; //here the object is of child class but it is calling parent class method
    return 0;
}
