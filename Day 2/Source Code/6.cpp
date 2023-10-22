//6. Accept two numbers and calculate GCD of them.


#include<iostream>
using namespace std;
int main()
{
	int n1,n2,h;
	cout<<"Enter two numbers :";
	cin>>n1>>n2;
	for(int i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			h=i;
		}
	}
	cout<<"\nThe GCD of "<<n1<<" and "<<n2<<" is "<<h;
	return 0;	
}


