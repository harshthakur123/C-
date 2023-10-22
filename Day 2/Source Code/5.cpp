//5. Write a program to calculate factors of a given number.

#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter a number - ";
	cin>>n;
	cout<<"Factors are -  ";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			{
			cout<<i<<" , ";
			count++;
			}
	}
	cout<<"\nNumber of factors - "<<count;
	return 0;
}
