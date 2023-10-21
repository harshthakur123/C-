//15.Write a  program to enter a number and print its reverse.

#include<iostream>
using namespace std;
int main()
{
	int n,temp,c=0;
	cout<<"Enter a number : ";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		c=c*10+n%10;
		n=n/10;
	}
cout<<"The number is "<<temp<<endl;
cout<<"The reversed number is "<<c;
return 0;
}
