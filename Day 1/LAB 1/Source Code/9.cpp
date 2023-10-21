//9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter the number to find factorial : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
if(n==0||n==1)
	cout<<"Factorial of "<<n<<" is = 1"<<endl;
else	
	cout<<"Factorial of "<<n<<" is = "<<fact<<endl;
	
return 0;	
	
}
