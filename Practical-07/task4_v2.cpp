#include<iostream>
using namespace std;
int main()
{
 int array[3][3];
 int cnt = 1;
 
 for(int i=0 ; i<3 ; i++)
   for(int j=0 ; j<3 ; j++)
     {
       array[i][j] = cnt;
       cnt++;
     }
     
  for(int i=0; i<3 ; i++)
   {
     for(int j=0 ; j<3 ; j++)
      cout<< array[i][2] / 3;
     cout<< endl;
   }
 return 0;
}     
            
