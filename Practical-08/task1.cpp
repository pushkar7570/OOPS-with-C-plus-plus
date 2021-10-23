#include<iostream>
using namespace std;
int main()
{
 int *p = { 10, 20, 30};
 cout<< *p;
 p++;
 cout<<*p;
 
 return 0;
} 

// Why it is showing error??

// Above program will show an error because no memory is being allocated to the pointer. 
// But P just acts as a place to store the address. 
