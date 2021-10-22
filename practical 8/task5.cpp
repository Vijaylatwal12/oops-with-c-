#include<iostream>
using namespace std;
int fact(int num)
{
    if(num>1)
       return num * fact(num-1);
    else
       return 1;
}
int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n);
    return 0;
}
