/*10.Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. 
Create an abstract class Employee with attributes like name and employee ID. 
Derive concrete classes like HourlyEmployee and SalariedEmployee. 
Define abstract methods for calculating pay in the base class and implement them in the derived classes.*/

#include<iostream>
#include<vector>
using namespace std;

class EMPLOYEE
{
	protected:
		string name;
		int empid;
		
	public:
		EMPLOYEE(string name,int empid)
		{
			this->name=name;
			this->empid=empid;
		}
		
		virtual void calculate_pay()=0;
		
		void display()
		{
			cout<<"\nName - "<<name<<endl;
			cout<<"Employee id - "<<name<<endl;
			//cout<<"Pay - "<<calculate_pay()<<endl;
			
			
		}
		
};

class HOURLY_EMPLOYEE:public EMPLOYEE
{
	private:
		double hourly_rate,hours_worked;
		
	public:
		HOURLY_EMPLOYEE(string name,int empid,double hourly_rate,double hours_worked):EMPLOYEE(name,empid)
		{
			this->hourly_rate=hourly_rate;
			this->hours_worked=hours_worked;
			
		}
		
		double calculate_pay()
		{
			return hourly_rate*hours_worked;
		}
		
		void display()
		{
			cout<<"\nName - "<<name<<endl;
			cout<<"Employee id - "<<name<<endl;
			cout<<"Pay - "<<calculate_pay()<<endl;
		}
		
};

class SALARIED_EMPLOYEE:public EMPLOYEE
{
	private:
		double salary;
		
	public:
		HOURLY_EMPLOYEE(string name,int empid,double hourly_rate,double hours_worked):EMPLOYEE(name,empid)
		{
			this->hourly_rate=hourly_rate;
			this->hours_worked=hours_worked;
			
		}
		
		double caculate pay()
		{
			return hourly_rate*hours_worked;
		}
		
		void display()
		{
			cout<<"\nName - "<<name<<endl;
			cout<<"Employee id - "<<name<<endl;
			cout<<"Pay - "<<calculate_pay()<<endl;
		}
		
};

int main()
{
	string name;
	int empid;
	double hourly_rate,hours_worked,salary;
	
	SALARIED_EMPLOYEE s("HARSH",123,5000.0);
	HOURLY_EMPLOYEE h("AKASH",345,300.0,5);
	
	s.calculate_pay();
	s.display();
	h.calculate_pay();
	h.display()
	
}


