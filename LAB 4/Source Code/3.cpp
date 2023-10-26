/*3. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;

class date
{
	private:
		int d,m,y;
	
	public:
	
	date()
	{
		d=06;
		m=03;
		y=2001;
	cout<<"Date :"<<d<<"/"<<m<<"/"<<y;	
	}	
	
	date(int d,int m,int y)
	{
		this->d=d;
		this->m=m;
		this->y=y;
		
	}
	
	void display()
	{
		cout<<d<<"/"<<m<<"/"<<y;
	}
	
	int get_day()
	{
		return d;
	}
	int get_month()
	{
		return m;
	}
	int get_year()
	{
		return y;
	}
	
	void set_day(int d)
	{
		this->d=d;
	}
	void set_month(int m)
	{
		this->m=m;
	}
	void set_year(int y)
	{
		this->y=y;
	}
};
	

int main()
{
	int d,m,y,ch;
	cout<<"Enter Day - ";
	cin>>d;
	cout<<"\nEnter Month - ";
	cin>>m;
	cout<<"\nEnter Year - ";
	cin>>y;
	
	date d1(d,m,y);
	cout<<"\n1. Display  2.Get Day  3.Get Month  4.Get Year  5.Set Day  6.Set Month  7.Set Year 8.Exit"<<endl;
	
	do
	{
		cout<<"\nEnter Choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				d1.display();
				break;
				
			case 2:
				cout<<d1.get_day();
				break;
			case 3:
				cout<<d1.get_month();
				break;
			case 4:
				cout<<d1.get_year();
				break;
			case 5:
				cout<<"Enter New Date:";
				cin>>d;
				d1.set_day(d);
				break;
			case 6:
				cout<<"Enter New Month:";
				cin>>m;
				d1.set_month(m);
				break;
			case 7:
				cout<<"Enter New Year:";
				cin>>y;
				d1.set_year(y);
				break;
			default:
				cout<<"Invalid Choice!!!";
		}
		
	}while(ch!=8);
	
return 0;	
}
