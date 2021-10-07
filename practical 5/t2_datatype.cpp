#include<iostream>
using namespace std;
void func1()
{
  char a ='i';
  cout<<a<<endl;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(a);
}
void func2()
{
  bool a=(45%5==0);
  cout<<a<<endl;
  cout<<sizeof(bool)<<endl;
  cout<<sizeof(a);
}
void func3()
{
  short a=76;
  cout<<a<<endl;
  cout<<sizeof(short)<<endl;
  cout<<sizeof(a);  
}
void func4()
{
   int a=78;
   cout<<a<<endl;
 cout<<sizeof(int)<<endl;
  cout<<sizeof(a);
}
void func5()
{
  long a=1000;
  cout<<a<<endl;
  cout<<sizeof(long)<<endl;
  cout<<sizeof(a);
}
void func6()
{
  float a=55.88f;
  cout<<a<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(a);
}
void func7()
{
   double a= 34.77;
   cout<<a<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(a);
 }
void func8()
{
   long double a=45.344L;
   cout<<a<<endl;
  cout<<sizeof(long double)<<endl;
  cout<<sizeof(a);   
}
void func9()
{
  wchar_t a=L'0';
  cout<<a<<endl;
  cout<<sizeof(wchar_t)<<endl;
  cout<<sizeof(a);
 }
int main()
{
 func1();
 func2();
 func3();
 func4();
 func5();
 func6();
 func7();
 func8();
 func9();
 }
