#include <iostream>
using namespace std;

class Parent{
    public:
    int var = 10;
    void display(){
        cout<<"This is parent class , value of var="<<var;
    }
    
};

class Child : public Parent{
    public:
    int ch = var + 10;
    void disp(){
        cout<<"This is child class, value of ch = "<<ch<<" value of var = "<<var<<endl;
    }
};

int main()
{
    Child obj;
    obj.disp();
    return 0;
}
