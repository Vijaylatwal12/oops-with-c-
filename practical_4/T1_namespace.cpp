#include<iostream>
using namespace std;
namespace first
{
  void saysomething()
  {
    cout<<"Hello";
  }
}   
  namespace second
  {
    void saysomething()
    {
      cout<<"Hi";
    }
  }  
int main()
{
  First::saysomething();
  Second::saysomething();
 return 0;
}
  
