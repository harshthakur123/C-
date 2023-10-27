/*1:Create Date class with members day,month ,year.
Write no argument(default) and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
respectively.Print date using display function.*/


#include<iostream>
using namespace std;

class date
{
	private:
		int dd,mm,yy;
	public:
			date()
		{	
			cout<<"Inside Default"<<endl;
			dd=06;
			mm=03;
			yy=2001;
		}
		
		date(int dd,int mm,int yy)
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
			
		}
		
		void displaydate()
		{
			cout<<"Date - "<<dd<<"/"<<mm<<"/"<<yy;
		}
		
};

int main()
{	
	
	int dd,mm,yy;
	cout<<"Enter the day - ";
	cin>>dd;
	cout<<"Enter the day - ";
	cin>>mm;
	cout<<"Enter the day - ";
	cin>>yy;
	
	
	date d1;
	d1.displaydate();
	cout<<endl;
	cout<<"Entered Value - "<<endl;
	date d2(dd,mm,yy);
	d2.displaydate();
}

