/*Version 2:Using "using keyword" 
 2. The function not visible to child class
    is int add function of Base Class*/
#include<iostream>
using namespace std;
class Base 
{
    public: 
    int add(int a,int b)
    {
        return(a+b);
    } 
    float add(float a,float b)
    {
        return(a+b);
    } 
}; 
class child:public Base{
    public: 
    using Base::add; 
    int add(int a,int b)
    {
        return(a+b+1);
    }
}; 
int main()
{
    child c;
    cout<<c.add(5,7)<<endl;
    cout<<c.add(2.8f,3.3f)<<endl; 
    return 0;
}
