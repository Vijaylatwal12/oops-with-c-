#include<iostream>
using namespace std;

namespace first{
  void sum(int x, int y){
   cout<<x+y<<endl;}
}
namespace second{
  void sum(float x , float y){
    cout<<x+y<<endl;}
}

using namespace first;

int main()
{
  sum(4 ,7);
  sum(3.5,2.6);
  sum(6.7,2);
  sum(3.3,6);
  return 0;
}
