/*Bank Account Inheritance:
Problem Statement: Design a system for managing bank accounts. 
Create a base class BankAccount with attributes like account number and balance. 
Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().*/


#include<iostream>
using namespace std;

class BANK_ACCOUNT
{
	protected:
		string ac_no,name;
		double balance=10000;
		
	public:
		BANK_ACCOUNT(string ac_no,string name)
		{
		 this->ac_no=ac_no;
		 this->name=name;
		}
		
	virtual void deposit(double amount)
	
	{
		if (amount>0)
		{
			balance=balance+amount;
			cout<<"\nDeposit Succesfully!!!"<<endl;
		}
		else
		{
			cout<<"\nEnter valid amount!!!"<<endl;
		}
		
	}
	
	virtual void withdraw(double amount)
	{
		if(amount>0&&amount<=balance)
		{
			balance=balance-amount;
			cout<<"\nWithdraw Successfully!!!"<<endl;
		}
		else
			cout<<"\nEnter valid amount!!!"<<endl;
	}
			

		 
	virtual void display()
	{
		cout<<"Account Number : "<<ac_no<<"\nBalance : "<<balance<<endl;
		
	 }
	 
	virtual void cal_int() =0;
	
		
}; 

class SAVING_ACCOUNT:public BANK_ACCOUNT
{
	private:
		double interest_rate=5.0,interest,time;
	public:
		SAVING_ACCOUNT(string ac_no,string name,double time):BANK_ACCOUNT(ac_no,name)
		{
			this->ac_no=ac_no;
			this->name=name;
			this->time=time;
		
		
		}
		
		void cal_int()
		{
			interest=(balance*interest_rate*time)/100;
			balance=balance+interest;
			cout<<"\nInterest of "<<interest<<" is added to account number "<<ac_no<<endl;
		}
		
		void display()
		{
			cout<<"\nAccount Number : "<<ac_no<<"\nBalance : "<<balance<<endl;
			
		}
};

class CHECKING_ACCOUNT:public BANK_ACCOUNT 
{
	private:
		double overdraft_limit;
	
	public:
		CHECKING_ACCOUNT(string ac_no,string name,double time):BANK_ACCOUNT(ac_no,name)
		{
			this->ac_no=ac_no;
			this->name=name;
			
		}
		

	
	virtual void withdraw(double amount)
	{
		if(amount>0&&amount<=balance+overdraft_limit)
		{
			balance=balance-amount;
			cout<<"\nWithdraw Successfully!!!"<<endl;
		}
		else
			cout<<"\nEnter valid amount!!!"<<endl;
	}
		
		void display()
		{
			cout<<"\nAccount Number : "<<ac_no<<"\nBalance : "<<balance<<endl;
			
		}	
		
		void cal_int()
		{
			
		}
};

int main()
{
	string ac_no,name;
	double overdraft_limit,time;
	
	SAVING_ACCOUNT s1("HKT2303","HARSH",3.0);
	CHECKING_ACCOUNT c1("MKT1090","MARK",3000.0);
	
	s1.display();
	s1.deposit(5000.0);
	s1.cal_int();
	s1.withdraw(2000);
	s1.display();
	
	cout<<"\n";
	
	c1.display();
	c1.deposit(5000);
	c1.withdraw(2000);
	c1.withdraw(20000); //when overdraft limit exist
	c1.display();
	
	
}



