/*2. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;

class Person{

	private:
		string name,city;
		int age;
	public:
		Person()
		{
			name="HK";
			city="Raipur";
			age=22;
			
		}
		Person(string name,string city,int age)
		{
			this->name=name;
			this->city=city;
			this->age=age;
		}
		void display_all()
		{
			cout<<"Name-"<<name<<endl;
			cout<<"City-"<<city<<endl;
			cout<<"Age-"<<age<<endl;
			
		}
		
		string get_name()
		{
			return name;
		}
			
		string get_city()
		{
			return city;
		}	
		
		int get_age()
		{
			return age;
		}
		
	
		void set_name(string name)
		{
			
			this->name=name;
		}
			
		void set_city(string city)
		{
			
			this->city=city;
		}	
		
		void set_age(int age)
		{
		
			this->age=age;
		}
		
		

};
		
		
		
			 
int main()
{
	
	string name,city;
	int age,ch;
	
	
	cout<<"\nEnter Name:";
	cin>>name;
	
	cout<<"\nEnter City:";
	cin>>city;
	
	cout<<"\nEnter Age:";
	cin>>age;

	Person p1(name,city,age);
	
	cout<<"\n1.Display All  2.Get Name  3.Get City  4.Get Age  5.Set Name  6.Set City  7.Set Age  8.Exit "<<endl;
	do
	{
		cout<<"\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				p1.display_all();
				break;
			case 2:
				cout<<p1.get_name();
				break;
			case 3:
				cout<<p1.get_city();
				break;
			case 4:
				cout<<p1.get_age();
				break;
			case 5:
				cout<<"Enter New Name-";
				cin>>name;
				p1.set_name(name);
				break;
			case 6:
				cout<<"Enter New City-";
				cin>>city;
				p1.set_city(city);
				break;
			case 7:
				cout<<"Enter New Age-";
				cin>>age;
				p1.set_age(age);
				break;
			default:
				cout<<"Enter Valid Choice";
				
				 
		}
	}while(ch!=8);
	
	return 0;
	
	
}
