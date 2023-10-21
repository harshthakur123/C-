//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include<iostream>
using namespace std;
int main()
{
	int base,pow,res=1;
	cout<<"Enter base and power :"<<endl;
	cin>>base>>pow;
	for(int i=1;i<=pow;i++)
		res=res*base;
	cout<<base<<" to the power "<<pow<<" = "<<res;	
	
 } 
