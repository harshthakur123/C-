/*6. Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber() and the display function. 
Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class imag
{	private:
		int a,b;
	public:
		acceptimag()
		{
			cout<<"Enter Real Part - ";
			cin>>a;
			cout<<"Enter Imaginary Part - ";
			cin>>b;
		}
		
		displayimag()
		{
			cout<<"Imaginary Number - "<<a<<" + i"<<b;
		}
	
};

int main()
{
	imag i1;
	i1.acceptimag();
	i1.displayimag();
	return 0;
}
