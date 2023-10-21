#include<iostream>
using namespace std;
int main()
{
	int b;
	cout<<"Enter the basic salary : "<<endl;
	cin>>b;
	if(b<=150000)
	{
		cout<<"Income Tax = 0 "<<endl;
	}
	else if(150000<b<300000)
	{
		cout<<"Income Tax = "<<0.2*(b-150000)<<endl; 
	}
	else
	{
		cout<<"Income Tax = "<<0.2*150000+0.3*(b-300000); 
	}
	return 0;
}
