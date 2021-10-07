#include<iostream>
#include<string>
using namespace std;
int main()
{
  cout<<"enter a string"<<endl;
  string b="";
  cin>>b;
  int l=b.length()-1;
  for(int i=0;i<b.length()/2;i++)
  {
  if(b[i]==b[l--])
    {
      cout<<"palindrome";
      return 0;
    }
  else
    {
      cout<<"not a palindrome";
       return 0;
    }
  }
}
    
