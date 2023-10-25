/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		double m1,m2,m3;
	public:
		acceptinfo()
		{
			cout<<"Enter Roll no.- ";
			cin>>rollno;
			cout<<"\nEnter Marks 1 - ";
			cin>>m1;
			cout<<"\nEnter Marks 2 - ";
			cin>>m2;
			cout<<"\nEnter Marks 3 - ";
			cin>>m3;
			
		}	
		
		displayinfo()
		{	
		double p;
			cout<<"\nRoll No - "<<rollno;
			cout<<"\nMarks 1 - "<<m1;
			cout<<"\nMarks 2 - "<<m2;
			cout<<"\nMarks 3 - "<<m3;
			cout<<"\nTotal Marks - "<<m1+m2+m3;
			p= ((m1+m2+m3)/300)*100;
			cout<<"\nPercentage - "<<p;
			if(p>90)
				cout<<"Grade = A";
			else if(p>80&&p<91)
				cout<<"Grade = B";
			else if(p>71&&p<60)
				cout<<"Grade = C";
			else if(p>50&&p<61)
				cout<<"Grade = D";
			else 
				cout<<"Grade = E";
		}
};

int main()
{	
	student s1;
	s1.acceptinfo();
	s1.displayinfo();
}
