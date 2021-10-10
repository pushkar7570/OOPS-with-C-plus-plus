#include<iostream>
#include<string>

using namespace std;
int main()
{
 string str;
 int len , flag = 0;
 getline(cin , str);
 
 //len = str1.length() ;
 string::reverse_iterator rit = str.rbegin();
 string::iterator it = str.begin();
 
 for( ; rit != str.rend() && it != str.end(); rit++ , it++)
 if(*rit != *it)
   {
    flag = 1;
    break;
   } 
   
 if(flag == 0)
  cout<<"Yes it is a palindrome";
 else
  cout<<"Not a palindrome";
 
 return 0;
}   
     
