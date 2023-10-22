//4. Write a program to calculate factorial of a number. 


#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter the number for factorial: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	 fact=fact*i;
	}
	cout<<"Fact = "<<fact;
	return 0;
	
	
}
	

