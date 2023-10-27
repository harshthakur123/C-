/*2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterised constructor in Employee Class.
Write accept() function to accept information and display() to display emp information.*/


#include<iostream>
using namespace std;

class date
{
	private:
		int d,m,y;
	public:
		
		
		
	    void acceptdate()
		{
			cout<<"Enter Date - ";
			cin>>d>>m>>y;
		}
		
		void display()
		{
			cout<<"Date - "<<d<<"/"<<m<<"/"<<y<<endl;
		}
};

class employee:public date
{
	private:
		int id;
		string name;
	public:
		employee()
		{
			id=101;
			name="Harsh";
		}
		
		employee(int id,string name)
		{
			this->id=id;
			this->name=name;
			
		}
		
		void display()
		{	
			date::acceptdate();
			date::display();
			cout<<"Name - "<<name<<"\nId - "<<id;
		}
		
};

int main()
{
	employee e(201,"Thakur");
	e.display();
}
