#include<iostream>
using namespace std;
 int main()
  {
    int a = 10;
    int b = 20;
    int *p;
    int **q;
    p = &a;
    q = &p;
    cout<<*p <<endl;
    cout<<**q <<endl;
    
    return 0;
  } 
  
// Task3 V2 
// Output will be 
// 10
// 


