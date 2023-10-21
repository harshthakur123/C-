#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter number 1 and number 2:"<<endl;
	cin>>n1>>n2;
	cout<<"n1 = "<<n1<<"\nn2 = "<<n2<<endl;
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	cout<<"After swapping:\n"<<"n1 = "<<n1<<"\nn2 = "<<n2;
	return 0;
	
}
