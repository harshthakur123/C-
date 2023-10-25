/*2. Create a class Person with data members as name, age, city. 
members. Also add accept and  display function. . Create the 
object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class person
{
	private:
		int age;
		string name,city;
	
	public:
		acceptinfo()
		{
			cout<<"Enter Your Name - ";
			cin>>name;
			cout<<"\nEnter Your Age - ";
			cin>>age;
			cout<<"\nEnter Your City - ";
			cin>>city;
			
		}
		
		displayinfo()
		{
			cout<<"\nName - "<<name;
			cout<<"\nAge - "<<age;
			cout<<"\ncity - "<<city;
		}
};

int main()
{
	person p1;
	p1.acceptinfo();
	p1.displayinfo();
	return 0;	
}
