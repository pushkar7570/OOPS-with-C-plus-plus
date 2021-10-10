#include<iostream>
using namespace std;
int main()
{
 char a = 'A';
 bool b = 1;
 short c = 23;
 int d = 3445;
 long e = 4556;
 float f = 56.096;
 double g = 45678;
 long double h = 2342453;
 wchar_t i = L'&';
 cout<<"Size of Char= "<<sizeof(char)<<endl;
 cout<<"Size of char variable="<<sizeof(a)<<endl;
 cout<<"Size of Bool= "<<sizeof(bool)<<endl;
 cout<<"Size of Bool variable="<<sizeof(b)<<endl;
 cout<<"Size of Short= "<<sizeof(short)<<endl;
 cout<<"Size of Short variable="<<sizeof(c)<<endl;
 cout<<"Size of Int= "<<sizeof(int)<<endl;
 cout<<"Size of Int variable="<<sizeof(d)<<endl;
 cout<<"Size of Long= "<<sizeof(long)<<endl;
 cout<<"Size of Long variable="<<sizeof(e)<<endl;
 cout<<"Size of Float= "<<sizeof(float)<<endl;
 cout<<"Size of Float variable="<<sizeof(f)<<endl;
 cout<<"Size of Double= "<<sizeof(double)<<endl;
 cout<<"Size of Double variable="<<sizeof(g)<<endl;
 cout<<"Size of Long Double= "<<sizeof(long double)<<endl;
 cout<<"Size of Long Double variable="<<sizeof(h)<<endl;
 cout<<"Size of Wide Character= "<<sizeof(wchar_t)<<endl;
 cout<<"Size of Wide Characer variable="<<sizeof(i)<<endl;
 return 0;
} 
