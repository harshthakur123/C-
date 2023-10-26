/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include<iostream>
using namespace std;

class Student
{
	private:
		double m1,m2,m3,T,P;
		int rollno;
	public:
		void acceptinfo()
		{  
			cout<<"Enter Roll no -";
			cin>>rollno;
			cout<<"Mark 1 -";
			cin>>m1;
			cout<<"Mark 2 - ";
			cin>>m2;
			cout<<"Mark 3 - ";
			cin>>m3;
			
			T=m1+m2+m3;
			P=(T/300.0)*100.0;	
		}
		void diplay()
		{
				
			cout<<"\nTotal Marks:"<<T<<"\nPercentage:"<<P<<endl;
			if(P>=91)
				cout<<"Grade:A";
			else if(P<=90&&P>80)
				cout<<"Grade:B";
			else if(P<=80&&P>70)
				cout<<"Grade:C";
			else if(P<=70&&P>61)
				cout<<"Grade:D";
			else 
				cout<<"Grade:E";	
		}
		
}; 

int main()
{
	Student s1;
	s1.acceptinfo();
	s1.diplay();
	return 0;
}
