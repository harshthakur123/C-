//8. Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using  namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the angles of triangle: "<<endl;
	cin>>a>>b>>c;
	if(a+b+c==180)
		cout<<"Triangle is valid.";
	else
		cout<<"Triangle is invalid.";
	return 0;
}

