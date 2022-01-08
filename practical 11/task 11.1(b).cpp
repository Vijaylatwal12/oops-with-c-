#include <bits/stdc++.h>
using namespace std;
class A {
   public:
   void parent() {
      cout << "\nThe parent class A function is called.";
   }
};
class B : public A {
   public:
   void child() {
      cout << "The derived class B function is called.";
   }
};
int main() {
   B obj;
   obj.parent();
   return 0;
}
