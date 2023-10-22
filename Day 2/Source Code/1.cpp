//1.Write a program that accepts numbers continuously as long as the number is positive and prints the 
//sum of the given numbers.

#include<iostream>
using namespace std;
int main()
{
cout<<"Enter numbers: ";
int n,sum=0;
while(n>0)
{
	cin>>n;
	if(n<0)
		break;
	sum=sum+n;
	
}
cout<<"Sum ="<<sum;
return 0;
}
