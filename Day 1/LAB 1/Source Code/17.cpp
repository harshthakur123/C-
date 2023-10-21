//17.Write a program to check entered number is Armstrong number or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,temp1,temp2,sum=0,count=0;
	cout<<"Enter a Number : "<<endl;
	cin>>n;
	temp1=temp2=n;
	while(n!=0)
	{
		
		n=n/10;
		count++;
	}
	for(int i=1;i<=count;i++)
		{
			a=temp1%10;
			sum=sum+pow(a,count);
			temp1=temp1/10;
		}

	if(temp2==sum)
		cout<<"The number "<<temp2<<" is Armstrong ";
	else
		cout<<"The number "<<temp2<<" is not Armstrong";
	return 0;
	
}
