//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;
int main()
{
	int a=1,base,power;
	cout<<"Enter base and power:";
	cin>>base>>power;
	for(int i=1;i<=power;i++)
	{
		a=a*base;
	 } 
	 cout<<base<<" raised to "<<power<<" is "<<a;
	 return 0;
}
