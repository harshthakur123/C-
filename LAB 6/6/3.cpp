/*3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.
*/

#include<iostream>
using namespace std;

class SHAPE
{
	virtual void area()=0;
		
};

class RECTANGLE:public SHAPE
{
	private:
		double length,width;
		
	public:
		RECTANGLE (double length,double width)
		{
			this->length=length;
			this->width=width;
		}
	
	void set_lb(double length,double width)
	{
		this->length=length;
		this->width=width;
		
	}
		
	void area()
	{
		cout<<"Area of Rectangle - "<<length*width<<endl;
	}

};

class SQUARE:public SHAPE
{
	private:
		double side;
		
	public:
		SQUARE (double side)
		{
			this->side=side;			
		}
	
	void set_s(double side)
	{
		this->side=side;
		
	}	
		
	void area()
	{
		cout<<"Area of Square - "<<side*side<<endl;
	}

};


class CIRCLE:public SHAPE
{
	private:
		double radius;
		
	public:
		CIRCLE(double radius)
		{
			this->radius=radius;			
		}
		
	void set_r(double radius)
	{
		this->radius=radius;
		
	}
		
	void area()
	{
		cout<<"Area of Circle - "<<2*(22/7)*radius<<endl;
	}

};

int main()
{
	int ch;
	double length,width,radius,side;
	CIRCLE c(radius);
	SQUARE s(side);
	RECTANGLE r(length,width);
	
	cout<<"1.CIRCLE   2.SQUARE   3.RECTANGLE   4.EXIT"<<endl;
	do
	{
		cout<<"\nEnter Choice - ";
		cin>>ch;
		if(ch<=4&&ch>=1)
		{
		
		switch(ch)
		{
			case 1:
				cout<<"\nTo find the area of circle,";
				cout<<"enter radius of circle - ";
				cin>>radius;
				c.set_r(radius);
				c.area();
				break;
			case 2:
				cout<<"\nTo find the area of square,";
				cout<<"enter side of square - ";
				cin>>side;
				s.set_s(side);
				s.area();
				break;
			case 3:
				cout<<"\nTo find the area of rectangle,";
				cout<<"enter length and width of rectangle - ";
				cin>>length>>width;
				r.set_lb(length,width);
				r.area();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid INPUT !!!";
				
		}
		}
		else
			{
			cout<<"Enter valid choice!!!";
			break;
			}
	}while(ch!=4);
	
	
}
