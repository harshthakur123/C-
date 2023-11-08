/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.
*/

#include<iostream>
#include"2.h"

using namespace std;

int main()
{
	int ch;
	string ac_no,cust_name;
	double amt;
	cout<<"------------ENTER BANK ACCOUNT DETAILS---------------"<<endl<<endl;
	cout<<"Enter Customer Name - ";
	cin>>cust_name;
	cout<<"Enter Account Number - ";
	cin>>ac_no;
	BANK b1(cust_name,ac_no);
	
	cout<<"1.Check   2.Withdraw   3.Deposit   4.Display Details   5.Exit   "<<endl;
	do
	{	cout<<"\nEnter Choice - ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<b1.get_bal();
				break;
			case 2:
				cout<<"Enter the amount you want to withdraw - ";
				cin>>amt;
				b1.withdraw(amt);
				break;			
				
			case 3:
				cout<<"Enter the amount you want to deposit - ";
				cin>>amt;
				b1.deposit(amt);
				break;	
				
			case 4:
				b1.display_info();
				break;
				
			case 5:
				exit(0);
			default:
				cout<<"Enter Valid Input!!!";
				
		}
	}while(ch!=5);
}
