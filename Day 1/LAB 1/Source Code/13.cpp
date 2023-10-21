//13.Check wheather the number is palindrome or not?

#include<iostream>
using namespace std;
int main()
{
	int temp,n,c=0;
	cout<<"Enter a number:";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		c=c*10+n%10;
		n=n/10;
	}
	cout<<"Number = "<<temp<<"\nAfter swap, number = "<<c<<endl;
	if(c==temp)
		cout<<temp<<" is Pallindrome ";
	else
		cout<<temp<<" is not Pallindrome ";
	return 0;
}
