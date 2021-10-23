#include<iostream>
using namespace std;

void swap(int &a , int &b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;
} 
int main()
{
 int a = 10;
 int b = 20;
 swap(a , b);
 cout<<"a = " << a <<endl << "b = "<< b <<endl;
 return 0;
} 
 
// Task7_V2
// Here after using the swap function, the values will be swapped
// even the function is called by values. But the values are actually  
// swapped here by the address. 
