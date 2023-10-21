//21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
//corresponding operation and displays the result.

#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char choice;
	cout<<"Enter two numbers:"<<endl;
	cin>>n1>>n2;
	cout<<"Enter Operator:";
	cin>>choice;
	switch(choice)
	{
		case '+':
			cout<<"n1+n2 = "<<n1+n2;
			break;
		case '-':
			cout<<"n1-n2 = "<<n1-n2;
			break;
		case '/':
			cout<<"n1/n2 = "<<(double)n1/n2;
			break;
		case '*':
			cout<<"n1*n2 = "<<n1*n2;
			break;				
	}
	return 0;
	
}
