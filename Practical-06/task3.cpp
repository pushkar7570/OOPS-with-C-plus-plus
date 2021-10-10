#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
 string str1 = "Hello Folks";
 string str2 = "My name is khan";
 
 cout<<"Reversed string 1 = ";
 string::reverse_iterator rit = str1.rbegin();
 for( ; rit != str1.rend() ; rit++)
   cout<<*rit;
 reverse(str2.begin() , str2.end() );
 cout<<endl<<"Reversed String 2 = " << str2 ;
 
 return 0;
}   
