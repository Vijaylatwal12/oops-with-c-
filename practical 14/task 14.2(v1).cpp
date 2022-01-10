#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};
class child : public Base
{
public:
    child()
    {
        cout << "Child Constructor" << endl;
    }
    ~child()
    {
        cout << "Child destructor" << endl;
    }
};
int main()
{
    Base *b;
    child c;
    b=&c;
    b->~Base();  
    return 0; 
}
