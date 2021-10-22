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
 float a = 10.3201;
 float b = 20.9654;
 
 cout<< First::add(a , b) << endl;
 cout<< Second::add(a , b);
 
 return 0;
} 
