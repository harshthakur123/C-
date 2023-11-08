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
using namespace std;

class BANK
{
	private:
		string ac_no,cust_name;
		double balance=10000.00;
		
	public:
		BANK()
		{
			cust_name="Harsh";
			ac_no=230134;
			balance=5000.0;
		}
		
		BANK(string cust_name,string ac_no)
		{
			this->cust_name=cust_name;
			this->ac_no=ac_no;
			this->balance=balance;
		}
		
		void withdraw(double amt)
		{
			if(amt<=balance&&amt>0)
				{
					balance=balance-amt;
					cout<<"Debit Successful!!!";
				
				}
			else
				cout<<"Invalid Input";	
					
		}
		
		double get_bal()
		{
			cout<<"Balance - "<<balance;
			
		}

		void deposit(double amt)
		{
			if(amt>0)
				balance=balance+amt;
		
			else
				{
					cout<<"Invalid Input";
					cout<<"Credit Successful!!!";
				}
		}		
		
		void display_info()
		{
			cout<<"\nName - "<<cust_name<<"\nAccount Number - "<<ac_no<<"\nBalance - "<<balance;
		}
		
		
		
};
		 
		
		
		
	

