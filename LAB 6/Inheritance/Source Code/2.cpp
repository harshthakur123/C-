/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. 
Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
Each shape should have methods for calculating area and perimeter specific to its geometry.*/

#include<iostream>
#include<math.h>
using namespace std;

class SHAPE
{	public:
	double area()
	{
		
	}
	double perimeter()
	{
		
	}
};

class CIRCLE:public SHAPE
{	
	private:
	int r;
	
	public:
	
	CIRCLE(double r)
	{
		this->r=r;
	}
	double area()override
	{
		return 3.14*r*r;
	}
	
	double perimeter()override
	{
		return 2*3.14*r;
	}
	
};

class TRIANGLE:public SHAPE
{
	private:
	 	double s1,s2,s3,sp,ar;
	 	

	public:
		
		TRIANGLE(double s1,double s2,double s3)
		{
			this->s1=s1;
			this->s2=s2;
			this->s3=s3;
		}
		double area()
		{
			sp=(s1+s2+s3)/2;
			ar=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
			return ar;
		}
		
		double perimeter()
		{
			return s1+s2+s3;
		}
};

class RECTANGLE:public SHAPE
{
	private:
		double l,b;
		
	public:
		
		RECTANGLE(double l,double b)
		{
			this->l=l;
			this->b=b;
		}
		
		double area()override
		{
			return l*b;
		}
		double perimeter()override
		{
			return 2*(l+b);
		}
};

int main()
{
	CIRCLE c(3.0);
	TRIANGLE t(2.0,3.0,4.0);
	RECTANGLE r(2.0,4.0);
	
	cout<<"\nArea of Circle = "<<c.area()<<"\nPerimeter of Circle = "<<c.perimeter()<<endl;
	cout<<"\nArea of Triangle = "<<t.area()<<"\nPerimeter of Triangle = "<<t.perimeter()<<endl;
	cout<<"\nArea of Reactangle = "<<r.area()<<"\nPerimeter of Rectangle = "<<r.perimeter()<<endl;
	
}


