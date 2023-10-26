/*6. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. 
Write getters and setters for all the data members.
 Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
*/


#include<iostream>
using namespace std;

class Imag
{
	private:
		int a,b;
	public:
		Imag() //Default Counstructor
		{
			a=10;
			b=20;
		}
		
		Imag(int a,int b)  //Parametrised Constructor
		{
			this->a=a;
			this->b=b;
		}
		
		void Display()
		{
			cout<<"Real Part - "<<a<<"\nImaginary Part - "<<b<<endl;
		}
		
		int get_real()
		{
			return a;
		}
		
		int get_imag()
		{
			return b;
		}
		
		void set_real(int a)
		{
			this->a=a;
		}
		void set_imag(int b)
		{
			this->b=b;
		}
		
		
};

	

int main()
{
	int a,b,ch;
	cout<<"Enter real part - ";
	cin>>a;
	cout<<"\nEnter imaginary part - ";
	cin>>b;
	
	Imag i(a,b);
	
	cout<<"\n1.Display  2.Get Real Part  3.Get Imaginary Part  4.Set Real Part  5.Set Imaginary Part  6.Exit "<<endl;
	do
	{
	   cout<<"\nEnter choice - ";
	   cin>>ch;
	   switch(ch)
	   {
	   		case 1:
	   			i.Display();
	   			break;
	   		case 2:
	   			cout<<i.get_real();
	   			break;
	   	    case 3:
	   	    	cout<<i.get_imag();
	   	    	break;
	   	    case 4:
	   	    	cout<<"Enter a real value - ";
	   	    	cin>>a;
	   	    	i.set_real(a);
	   	    	break;
	   	    case 5:
	   	    	cout<<"Enter a real value - ";
	   	    	cin>>b;
	   	    	i.set_imag(b);
	   	    	break;
			default:
				cout<<"Enter a valid choice!!!";
					
	   }
	}while(ch!=6);
	return 0;
	
}
