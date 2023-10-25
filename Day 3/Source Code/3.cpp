/*3. Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class date
{
	private:
		int dd,mm,yy;
	
	public:
	AcceptDate()
	{
		cout<<"Enter Date - ";
		cin>>dd;
		cout<<"\nEnter Month - ";
		cin>>mm;
		cout<<"\nEnter Year - ";
		cin>>yy;
		
	}	
	
	DisplayDate()
	{
		cout<<"\nDate - "<<dd<<"/"<<mm<<"/"<<yy;
	}
};

int main()
{
	date d1;
	d1.AcceptDate();
	d1.DisplayDate();
}
