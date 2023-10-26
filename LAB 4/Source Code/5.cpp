/*5. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 
*/


#include<iostream>
using namespace std;

class Point
{
	private:
		int x,y;
	
	public:
	point()
	{
	x=10;
	y=20;	
	}	
	
	Point(int x,int y)
	{
		this->x=x;
		this->y=y;
		
	}
	
	void display()
	{
		cout<<"\nx coordinate = "<<x<<"\ny coordinate = "<<y<<"\n("<<x<<","<<y<<")"<<endl;
	}
	
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
	
	void set_x(int x)
	{
		this->x=x;
	}
	void set_y(int y)
	{
		this->y=y;
	}
	
	
};


int main()
{
int x,y,ch;
 
cout<<"Enter x coordinate - ";
cin>>x;
cout<<"\nEnter y coordinate - ";
cin>>y;

Point p1(x,y);

cout<<"\n1.Display  2.Get x coordinate  3.Get y coordinate  4.Set x coordinate  5.Set y coordinate  6.Exit"<<endl;
	do
	{
		cout<<"\nEnter Choice - ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				p1.display();
				break;
			case 2:
				cout<<p1.get_x();
				break;
			case 3:
				cout<<p1.get_y();
			case 4:
				cout<<"\nEnter New Value of x - ";
				cin>>x;
				p1.set_x(x);
				break;
			case 5:
				cout<<"\nEnter New Value of y - ";
				cin>>y;
				p1.set_y(y);
				break;
			default:
				cout<<"Enter a valid choice!!!";
				
		}
		
	}while(ch!=6);
return 0;
}

