#include <iostream>
using namespace std;
int main()
{
	for(int i=4; i>0; i--)
	{
		for(int j=0; j<=4; j++) 
		{
			if (j>=i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
