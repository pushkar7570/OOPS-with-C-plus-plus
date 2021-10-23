#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
} 
int main()
{
 int a = 10;
 int b = 20;
 swap(&a , &b);
 cout<<"a = " << a <<endl << "b = "<< b <<endl;
 return 0;
} 
 
// Task7_V3
// Here after using the swap function, the values will be swapped
// by calling the function by address. And here the actual values 
// are not being swapped but only the address is swapped.
