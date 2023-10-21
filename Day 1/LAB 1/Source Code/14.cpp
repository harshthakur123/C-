//14.Write a  program to find sum of all even and odd numbers between 1 to n.

#include<iostream>
using namespace std;
int main()
{
	int n,sum_odd=0,sum_even=0;
	cout<<"Enter the number upto which you want sum: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			sum_even=sum_even+i;
		else
			sum_odd=sum_odd+i;
	}
cout<<"Sum of even numbers from 1 to "<<n<<" is "<<sum_even<<endl;
cout<<"Sum of odd numbers from 1 to "<<n<<" is "<<sum_odd<<endl;
return 0;		
}
