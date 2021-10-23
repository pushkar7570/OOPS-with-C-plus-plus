#include<iostream>
using namespace std;

long int fact(int num)
{
 long int facto=1;
 for(int i=1 ; i<=num ; i++)
   facto *= i;
   
 return facto;
}   
int main()
{
 int num;
 cout<<"Enter number: ";
 cin>>num;
 long int facto = fact(num);
 cout<< endl <<"Factorial ="<< facto;
 
 return 0;
} 
 
