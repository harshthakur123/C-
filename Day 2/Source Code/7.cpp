/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/

#include<iostream>
using namespace std;
int main()
{
	int ch,rb,rh,tb,th;
	float r;
	cout<<"1. Circle  2.Rectangle  3.Triangle  4.Exit  ";
	
	do
	{
		cout<<"\nEnter your choice-";
		cin>>ch;
		switch(ch)
		{
			
			case 1:
				cout<<"\nEnter the radius of circle- ";
				cin>>r;
				cout<<"\nArea = "<<(22/7)*r*r;
				break;
				
			case 2:
				cout<<"\nEnter the base and height of ractangle-"; 
				cin>>rb>>rh;
				cout<<"Area = "<<rb*rh;
				break;
			case 3:
				cout<<"\n Enter the base and height of triangle-";
				cin>>tb>>th;
				cout<<"Area = "<<tb*th;
				break;
			default:
				cout<<"Enter valid choice!!! ";
		}
		
		
	}while(ch!=4);
	return 0;
}
