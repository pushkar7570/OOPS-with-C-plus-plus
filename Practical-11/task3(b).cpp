// Diamond problem occurs when a child class inherits from two parent classes
// who both share a common grandparent child.
#include <iostream>
using namespace std;

class GrandParent{
    public:
    int k;
    GrandParent(){
        k = 10;
        cout << "Constructor of class GrandParent called , value of k = " <<k<<endl; 
    }
};
class Parent_1 :virtual public GrandParent{ // here we have used virtual keyword hence compiler does not 
                                            // get confused in which constructor to call first
    public:
    Parent_1(){
        k += 10;
        cout << "Constructor of class Parent_1 called , value of k = " << k <<endl; 
    }
};
class Parent_2 :virtual public GrandParent{ // here we have used virtual keyword hence compiler does not 
                                            // get confused in which constructor to call first
    public:
    Parent_2(){
        k += 20;
        cout << "Constructor of class Parent_2 called , value of k = " << k <<endl; 
    }
};
class Child : public Parent_1 , public Parent_2{
    public:
    Child(){
        cout << "Constructor of class Child called , value of k = " << k <<endl; 
        
    }
};
int main()
{
    Child obj;
    return 0;
}
// Now in the output the Constructor of GrandParent class is called only once and it clears
// the ambiguity for the compiler to call only one constructor of base class.
