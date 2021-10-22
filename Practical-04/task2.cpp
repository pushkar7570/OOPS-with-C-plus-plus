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
 using namespace First;
 using namespace Second;
 int a = 20;
 int b = 10;
 float c = 10.3201;
 float d = 20.9654;
 
 cout<< add(a , b) << endl;
 cout<< add(c , d);
 
 return 0;
} 
