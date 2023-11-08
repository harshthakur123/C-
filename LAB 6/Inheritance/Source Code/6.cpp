/*6.Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism. 
Define a base class Shape with methods to calculate area and perimeter. 
Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.*/

#include<iostream>
#include<math.h>
using namespace std;

class SHAPE
{
	virtual void area()=0;
	virtual void perimeter()=0;
	
};

class CIRCLE:public SHAPE
{
	private:
		double rad;
	
	public:
		
		CIRCLE(double rad);
		
		void area()
		{
			cout<<"\nArea of circle = "<<(22/7)*rad*rad;
		}
		
		void perimeter ()
		{
			cout<<"\nPerimeter of circle = "<<2*(22/7)*rad;
		}
};

class RECTANGLE:public SHAPE
{
	private:
		double length,width;
		
	
	public:
		
		RECTANGLE(int length,int width);
		
		void area()
		{
			cout<<"\nArea of rectangle = "<<length*width;
		}
		
		void perimeter ()
		{
			cout<<"\nPerimeter of rectangle = "<<2*(length+width);
		}
};

class TRIANGLE:public SHAPE
{
	private:
		double side_1,side_2,side_3,semi_perimeter,area;
	
	public:
		
		TRIANGLE(int side_1,int side_2,int side_3);
		
		
		
		void area()
		{
			semi_perimeter=side_1+side_2+side_3;
			area=sqrt(semi_perimeter*(semi_perimeter-side_1)*(semi_perimeter-side_2)*(semi_perimeter-side_3));
			cout<<"\nArea of triangle = "<<area;
		
					}
		
		void perimeter ()
		{
			cout<<"\nPerimeter of triangle = "<<side_1+side_2+side_3;
		}
};

