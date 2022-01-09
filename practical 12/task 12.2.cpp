#include<iostream>
using namespace std;
class A{
  public:
  A(){
    cout<<"i am constructor of class A"<<endl;
  }
  int x=28;
  ~A(){
    cout<<"i am destructor of class A"<<endl;
  }
};
class B:public A{
  public:
   B(int y){
    cout<<y<<endl;
    cout<<"i am constructor of class B"<<endl;
  }
  int x=12;
   ~B(){
    cout<<"i am destructor of class B"<<endl;
  }
};
class C:public B{
  public:
   C():B(7) //parameter passed from derived class constructor to base class
   {
    cout<<"i am constructor of class c"<<endl;
  }
  int z=10;
   ~C(){
    cout<<"i am destructor of class c"<<endl;
  }
};

int main(){
  C obj;
}
//constructor call flow c->b->a
//constructor execution flow a->b->c
