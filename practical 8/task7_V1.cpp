#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	cout<<"After Swapping a & b: "<<a<<" "<<b;
}
int main()
{
	int a,b;
	cout<<"Enter value of a and b"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping a & b: "<<a<<" "<<b<<endl;
	swap(a,b);
	
}
	
