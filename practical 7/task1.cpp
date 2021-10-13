#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter your choice"<<endl;
  cin>>a;
  switch(a)
  {
    case 1:cout<<"YEAR:2021"<<endl;
           break;
    case 2:cout<<"MONTH:October"<<endl;
           break;
    case 3:cout<<"DATE:13/10/21"<<endl;
           break;
    default:cout<<"not applicable"<<endl;
           break;
  }
  return 0;
}
