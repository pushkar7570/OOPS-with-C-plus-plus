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
 for(int i=2 ; i>=0 ; i--)
    {
      for(int j=2 ; j>=0 ; j--)
        cout<< array[i][j];
      cout<<endl; 
    }
      
 return 0;
}        

// Task3_v3
// In this task we have initialised the elements of the array from 1 to 9
// Then we have printed the values in reverse by initialising both the loop
// from the end.
