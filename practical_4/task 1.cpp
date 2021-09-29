#include<iostream>
using namespace std;
namespace first
{
   int add (int a , int b)
   {
    return (a+b);
   }
 }
 namespace second
 {
   float add (float a , float b)
   {
      return (a+b);
   }
 }
 using namespace first;
 using namespace second;
 int main()
 {
   cout <<"sum:"<<first::add(3,4)<<endl;
   cout<<"sum:"<< second::add(2.5,6)<<endl;
   cout<<"sum:"<<second::add(4,3.3)<<endl;
   cout<<"sum:"<<second::add(5.5,4.5)<<endl;
   return 0;
}
 
   
