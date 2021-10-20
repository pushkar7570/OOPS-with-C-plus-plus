#include<iostream>
#include<ctime>

using namespace std;
int main()
{
 time_t t = time(NULL);
 tm* ptr = localtime(&t);
 int a;
 cout<<"Enter 1 for year\n 2 for month\n 3 for day\n";
 cin>>a;
 switch(a)
 {
  case 1:
    cout<<1900 + ptr->tm_year;
    break;
  case 2:
    cout<<ptr->tm_mon +1 ;
    break;
  case 3:
    cout<<ptr->tm_mday ;
    break;
  default:
    cout<<"NOT APPLICABLE";
    
 }         
 return 0;
} 
