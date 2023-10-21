//11.Check if number is a prime number or not.: 

#include<iostream>
using namespace std;
int main()
{
	int n;
	bool flag=false;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{flag=true;
			break;
		}
		else
			flag=false;
	 } 
	if(flag==false)
		cout<<n<<" is Prime";
	else
		cout<<n<<" is not Prime";
	return 0;
}
