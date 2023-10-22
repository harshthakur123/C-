//8. Write a program to print all prime numbers between 1 to n

#include<iostream>
using namespace std;


void find(int a)
{	bool f=false;
	for(int i=1;i<=a;i++)
		{
			if((i!=1&&i!=a)&&a%i==0)
			    {
					f=true;
					break;
				}
		}
	if(!f)
		cout<<a<<" ";
}

int main()
{
	int n;

	cout<<"Enter a number till you want to print prime numbers - ";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		find(i);
	}
}


