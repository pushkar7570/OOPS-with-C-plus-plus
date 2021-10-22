#include<iostream>
using namespace std;
namespace First
 {
   int add(int a , int b)
    {
      return (a + b);
    }
 }    
 
namespace Second
 {
   float add(float a , float b)
    {
      return (a + b);
    }
 }  
   
int main()
{
 int a = 10;
 int b = 20;
 float c = 10.3201;
 float d = 20.9654;
 
 cout<< add(a , b) << endl;
 cout<< add(c , d);
 
 return 0;
} 

// It will throw an error because add() is not declared in this scope.
// It can be corrected by using (::) operator or using "using" keyword.
