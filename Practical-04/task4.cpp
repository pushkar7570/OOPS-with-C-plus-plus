
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
 
 cout<< First::add(a , c) << endl;
 cout<< Second::add(b , d);
 
 return 0;
} 

// It will add int and float (by changing float into int and int into float).
