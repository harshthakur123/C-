#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number :"<<endl;
	cin>>n;
	if(n%5==0&&n%7==0)
	{
		cout<<"Number is divisible by 5 and 7."<<endl;
	}
	else
	  cout<<"Number "<<n<<" is divisible by 5 and 7."<<endl;
return 0;
}
