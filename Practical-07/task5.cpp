#include<iostream>
using namespace std;
int main()
{
 char array[4][4];
 int i , j;
 for(i=0 ; i<4 ; i++)
    for(j = 0 ; j<4 ; j++)
       array[i][j] = '*';
 
 for(i=0 ; i<4 ; i++)
 {
  for(j=0 ; j<=i ; j++)
    cout<<array[i][j];
  
  cout<<endl;
 }  
 return 0;
 }    
       
