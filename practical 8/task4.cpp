  #include<iostream>
  using namespace std;
  long int fact(int n)
	{
	long fact_num=1;
	for(int i=1;i<=n;i++)
	{
     fact_num*=i;
		 }
		 return fact_num;	 
	}
	int main()
	{
    int num;
		cout<<"Enter the number:"<<endl;
		cin>>num;
		cout<<fact(num)<<endl;
    return 0;
  }
