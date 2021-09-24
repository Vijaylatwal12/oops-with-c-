#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a no. to check for prime\n";
  cin>>n;
  int temp=0;
  if(n==1)
  cout<<"not a prime number";
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
       temp++;
  }
  if(temp==0)
   cout<<n<<" is a prime number";
  else 
   cout<<n<<" is not a prime";
return 0;
}

