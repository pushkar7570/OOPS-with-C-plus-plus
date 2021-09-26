#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int a , flag=0;
 cout<<"Enter a number: ";
 cin>>a;
 for(int i=2 ; i<=sqrt(a) ; i++)
 {
   if(a%i == 0)
     {
       flag=1;
       break;
     }  
 }
 
 if(flag == 0)
  cout<<"Number is prime";
 else
  cout<<"Not Prime"; 
 return 0;
}       
