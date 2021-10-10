#include<iostream>
#include<string>

using namespace std;
int main()
{
 short flag = 1;
 string str1 = "Hello Folks";
 string str2 = "Hello Folks";
 
 string::iterator it1 = str1.begin();
 string::iterator it2 = str2.begin();
 
 for( ; it1 != str1.end() || it2 != str2.end() ; it1++ , it2++)
   if(*it1 != *it2)
   {
    flag = 0;
    break;
   }

 if(flag == 1)
  cout<<"Equal";
 else
  cout<<"Not Equal";
  
 return 0;
}        
