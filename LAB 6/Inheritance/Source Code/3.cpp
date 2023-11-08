/*Employee Inheritance:
Problem Statement: Build a system for managing employees. 
Create a base class Employee with attributes such as name, employee ID, and salary. 
Then, derive classes like Manager and Developer, each with its own attributes and methods.
Implement a common method, like calculate_salary(), in the base class.*/

#include<iostream>
using namespace std;

class EMPLOYEE
{
	protected:
		string name;
		int empid;
		double salary;
	
	public:
		EMPLOYEE(string name,int empid,double salary)
		{
			this->empid=empid;
			this->salary=salary;
			this->name=name;
		}
		
		virtual double calsal()=0;
		
		virtual void display_info()
		{
			cout<<"\nEmployee Id = "<<empid<<"\nName = "<<name<<"\nSalary = "<<salary<<endl;
		}
		
	
		
};

class MANAGER:public EMPLOYEE
{
	private:
		double bonus;
	public:
		MANAGER(string name,int empid,double salary,double bonus):EMPLOYEE(name,empid,salary)
		{
			
			this->name=name;
			this->empid=empid;
			this->salary=salary;
			this->bonus=bonus;
		}
		double calsal()
		{
			return salary+bonus;
		}
		
		void display_info()
		{
		
		cout<<"\nEmployee Id = "<<empid<<"\nName = "<<name<<"\nBasic Salary = "<<salary<<"\nNet Salary "<<calsal()<<endl;
		
		}
		
		
		
		void monitoring()
		{
			cout<<"Manager do monitoring."<<endl;
		}
	
};

class DEVELOPER:public EMPLOYEE

{
	private:
		string language;
	public:
		DEVELOPER(string name,int empid,double salary,string language):EMPLOYEE(name,empid,salary)
		{
			this->name=name;
			this->empid=empid;
			this->salary=salary;
			this->language=language;
			
		}
		
		double calsal()
		{
			return salary;
		}
		void display_info()
		{
				cout<<"\nEmployee Id = "<<empid<<"\nName = "<<name<<"\nSalary = "<<calsal()<<"\nProgramming Language = "<<language<<endl;
		}
		void development()
		{
			cout<<"Developer do development"<<endl;
		}
		
		
};

int main()
{
	DEVELOPER d("HARSH",122,5000.0,"C++");
	MANAGER m("HK",321,10000.0,1000.0);
	
	d.calsal();
	d.display_info();
	d.development();
	m.calsal();
	m.display_info();
	m.monitoring();
}


