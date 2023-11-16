/*
Create class cEmployee with data members as empno,name and salary.
Accept values from user. Store it in file.
Display the contents from file.
Program should be able to store information of multiple employees.*/
   
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class EMPLOYEE
{
	private:
		string name;
		int empno;
		double salary;
		
	public:
		EMPLOYEE(string name,int empo,double salary)
		{
			this->name=name;
			this->empno=empno;
			this->salary=salary;
			
		}
		
		void display()
		{	fstream f;
			f.open("Employee1.txt",ios::app);
			
			f<<"\nname - "<<name<<"\nempno - "<<empno<<"\nsalary - "<<salary;
		//	cout<<"\nname - "<<name<<"\nempno - "<<empno<<"\nsalary - "<<salary<<endl;
		f.close();
		}
		
		
};

int main()
{
	vector<EMPLOYEE>em;
	string name;
	double salary;
	int ch,empno;
	
	cout<<"1. Enter Details  2.Read File  3.EXIT "<<endl;
	
	do
	{
		cout<<"\nEnter Choice - ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"\nEnter Name - ";
					cin>>name;
					cout<<"Enter Employee number - ";
					cin>>empno;
					cout<<"Enter Salary - ";
					cin>>salary;
					EMPLOYEE *emp=new EMPLOYEE(name,empno,salary);
					em.push_back(*emp);
					
					for(int i=0;i<em.size();i++)
						{
							em[i].display();
						}
				
					cout<<"\nData Stored Successfully!!!"<<endl;
					break;
				}
			
			case 2:
				{	string out;
					fstream fout("Employee1.txt");
					//fout.open("Employee.txt",ios::in);
					while(getline(fout,out)){
						cout<<out<<endl;
					}
					fout.close();
				}
				
			case 3:
				break;
			
			default:
				cout<"Invalid Input!!!";				
			
		}
	}while(ch!=3);
	
	

}
