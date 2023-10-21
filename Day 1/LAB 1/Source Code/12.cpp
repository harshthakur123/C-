//12:Sum of series :
//	1+2+3+….+n

#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the number upto which you want sum of series: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
		sum=sum+i;
	cout<<"Sum of series upto "<<n<<" is "<<sum;
	return 0;
	
	
}
