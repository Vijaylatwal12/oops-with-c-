#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a="";
  getline(cin,a);
  string b="";
  getline(cin,b);
  if(a.compare(b)==0)
    cout<<"equal";
  else
    cout<<"not equal";
  return 0;
}
  
