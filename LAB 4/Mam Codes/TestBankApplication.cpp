#include<iostream>
#include"Bank.h"
using namespace std;
int main()
{
BankApplication::Bank act1;
act1.display();
cout<<act1.getBalance();	


 BankApplication::Bank act2(101,"Vinit","aaa@gmail.com",90000);
	act2.display();

typedef  BankApplication::Bank MyBank;
	
	MyBank bk1;
	bk1.display();
	
}
