/*1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exit
----------------------------------------------------*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class EMPLOYEE
{
	protected:
		string name;
		int id,deptid;
		double basic_salary;
	
	public:
		EMPLOYEE(string name,int id,int deptid,double basic_salary)
		{
			this->name=name;
			this->id=id;
			this->deptid=deptid;
			this->basic_salary=basic_salary;
			
		}
		
	virtual double net_salary()=0;

	virtual void display_info()
	{
		cout<<"\nName - "<<name<<"\nId - "<<id<<"\nDepartment Id - "<<deptid<<"Net Salary - "<<net_salary()<<endl;
	}
	
};

class WORKER:public EMPLOYEE
{
	private:
		double hourly_rate,hours_worked;
	
	public:
		WORKER(string name,int id,int deptid,double basic_salary,double hourly_rate,double hours_worked):EMPLOYEE(name,id,deptid,basic_salary)
		{
			this->hourly_rate=hourly_rate;
			this->hours_worked=hours_worked;
		}
	
//		double net_salary()
//		{
//			return basic_salary+(hours_worked*hourly_rate);
//		}

		
	double get_hourly_rate()
	{
		return hourly_rate;
	}
	
	double net_salary()
	{
		return basic_salary+hours_worked*hourly_rate;
	}
	

	
	void display_info()
	{
		EMPLOYEE::display_info();
		cout<<"\nHourly Rate - "<<hourly_rate<<"\nWorking Hours - "<<hours_worked<<endl;
	}	
		
		
};

class MANAGER:public EMPLOYEE
{
	protected:
		double perf_bonus;
	
	public:
	 MANAGER(string name, int id, int deptid, double basic_salary, double perf_bonus)
        : EMPLOYEE(name, id, deptid, basic_salary)
		{

			this->perf_bonus=perf_bonus;
			
		}
//	double net_salary()
//		{
//		
//			return basic_salary+perf_bonus;
//		}
	double net_salary()
	{
		return basic_salary+perf_bonus;
	}
		
	void display_info()
		{
			EMPLOYEE::display_info();
			cout<<"\nPerformance Bonus - "<<perf_bonus<<"\nNet Salary - ";
		}	
		
	

	
};

int main()
{
	string name;
	int ch,id,deptid;
	double hourly_rate,hours_worked,perf_bonus,basic_salary;
	vector<EMPLOYEE>data;
	//cout<<"1.Hire Manager   2.Hire Worker   3.Display   4.Exit"<<endl;
	
//	EMPLOYEE emp("Kumar",201,3011,5000.0);
//	emp.display_info();
//
//	WORKER w("Harsh",201,3011,5000.0,10.0,5.0);
//	w.display_info();
//	
//	MANAGER m("Thakur",302,11234,10000.0,2000.0);
//	m.display_info();

	do
	{
		cout<<"\n1.Hire Manager   2.Hire Worker   3.Display   4.Exit"<<endl;
		cout<<"Enter Choice - ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{cout<<"\n---------MANAGER DETAILS--------------"<<endl;
				cout<<"Enter Name - ";
				cin>>name;
				//getline(cin, name);
				cout<<"\nEnter Id - ";
				cin>>id;
				cout<<"\nEnter DeptId - ";
				cin>>deptid;
				cout<<"\nEnter Performance Bonus - ";
				cin>>perf_bonus;
				cout<<"\nEnter Basic Salary - ";
				cin>>basic_salary;
				MANAGER *m=new MANAGER(name,id,deptid,basic_salary,perf_bonus);
				data.push_back(*m);
				break;
				}
				
			case 2:
				{cout<<"\n---------WORKER DETAILS--------------"<<endl;
				cout<<"Enter Name - ";
				cin>>name;
				//getline(cin, name);
				cout<<"\nEnter Id - ";
				cin>>id;
				cout<<"\nEnter DeptId - ";
				cin>>deptid;
				cout<<"\nEnter hourly Rate - ";
				cin>>hourly_rate;
				cout<<"\nEnter hours worked - ";
				cin>>hours_worked;
				cout<<"\nEnter Basic Salary - ";
				cin>>basic_salary;
				WORKER *w=new WORKER(name,id,deptid,basic_salary,hourly_rate,hours_worked);
				data.push_back(*w);
				break;
				}
			case 3:
				for(int i=0;i<data.size();i++)
				{
					data[i].display_info();	
				}
				
			case 4:
				break;
				
			default:
				cout<<"Invalid Input!!!";
				
		}
		
		
	}while(ch!=4);
	





}
