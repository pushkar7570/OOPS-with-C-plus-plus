#include<iostream> 
using namespace std; 
class remain 
{ 
 private: 
 int a; 
 int b; 
 public: 
 remain(int a,int b) 
 { 
 cout<<a%b; 
 } 
}; 
int main() 
{ 
 int a=10,b=4; 
 remain r(a,b); 
 return 0; 
} 
