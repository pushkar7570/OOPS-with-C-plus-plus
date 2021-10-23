#include<iostream>
using namespace std;

void swap(int a , int b)
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
 
// Task7_V1
// Here even after swapping the values of variables a and b using swap func.,
// the values have not swapped beacause the function was called by values. 

