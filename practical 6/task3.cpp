#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void reverse(string s)
{
  string rev="";
  for(int i=s.size();i>=0;i--)
  {
   rev=rev+s[i];
  }
cout<<rev<<endl;
}
int main()
{
  string s="";
  getline(cin,s);
  reverse(s);
  return 0;
}
  
 
  
