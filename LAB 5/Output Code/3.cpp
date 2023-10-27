#include<iostream>
using namespace std;

class employee{
	
	private:
	int id;
	string name;
	double Basic_Salary,HRA,Medical =1000,PF ,PT=200.0,Net_Salary,Gross_Salary;
	
	public:
		
		employee(int id,string name,double Basic_Salary)
		{
			this->Basic_Salary=Basic_Salary;
			this->id=id;
			this->name=name;
		}
		
		
		
		void display_Gross_salary()
		{
			HRA=0.5*Basic_Salary;
			PF=0.12*Basic_Salary;
			Gross_Salary=Basic_Salary+HRA+Medical;
			cout<<"Gross Salary = "<<Gross_Salary<<endl;
			
			
		}
		
		void display_Net_Salary()
		{	
			Net_Salary=Gross_Salary-(PF+PT);
			
			cout<<"Net_Salary = "<<Net_Salary;
		}
};	

int main()
{
	int id;
	string name;
	double Basic_Salary;
	
	
	cout<<"Enter Name - ";
	cin>>name;
	cout<<"\nEnter id - ";
	cin>>id;
	cout<<"\nEnter Basic Salary - ";
	cin>>Basic_Salary;
	
	
	employee e(id,name,Basic_Salary);
	
	e.display_Gross_salary();
	e.display_Net_Salary();
	
	return 0;
	
}

