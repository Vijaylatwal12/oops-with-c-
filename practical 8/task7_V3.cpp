#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;	
}
int main()
{
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping a & b: "<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"After Swapping a & b: "<<a<<" "<<b<<endl;
}
