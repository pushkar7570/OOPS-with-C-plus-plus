#include<iostream>
#include<math.h>
using namespace std;

int series(int n)
{
 if(n >= 1)
   return n*(pow((n-1) , (n-1)) + (n-1));
 else
   return 1;
}     
int main()
{
 int num;
 cout<<"Enter number: ";
 cin>> num;
 cout<< endl << series(num);
 
 return 0;
} 
