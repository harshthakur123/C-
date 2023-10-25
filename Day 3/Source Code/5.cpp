/*5. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */


#include<iostream>
using namespace std;

class point
{
	private:
		int x,y;
	public:
		acceptpoint()
		{
			cout<<"Enter x cooordinate - ";
			cin>>x;
			cout<<"Enter y coordinate - ";
			cin>>y;
		}
		
		displaypoint()
		{
			cout<<"Point - ("<<x<<","<<y<<")";
		}
};

int main()
{
	point p1;
	p1.acceptpoint();
	p1.displaypoint();
	return 0;
		
}
