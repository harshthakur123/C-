//3. Write a program to accept a character, an integer n and display the next n characters.


#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch,c;
	cout<<"Enter a character:";
	cin>>c;
	cout<<"Enter the value upto which you want to print next characters:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ch=c+i;
		cout<<ch<<" ";
	}
//int a;
//a='A';
//cout<<a;
		
}
