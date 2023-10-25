/*4. Create a class Book with data members as bname,id,author,price. Write AcceptBook function . Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */


#include<iostream>
using namespace std;

class book
{
	private:
		
		int id;
		string bname,author;
		double price;
	
	public:
		
		acceptbook()
		{
			cout<<"Enter Book Name - ";
			cin>>bname;
			cout<<"\nEnter Author Name - ";
			cin>>author;
			cout<<"\nEnter price - ";
			cin>>price;
			cout<<"\nEnter id - ";
			cin>>id;
		}
		
		displaybook()
		{
			cout<<"\nBook Name - "<<bname;
			cout<<"\nAuthor Name - "<<author;
			cout<<"\nEnter Price - "<<price;
			cout<<"\nid - "<<id;
			
		}
		
};

int main()
{
	book b1;
	b1.acceptbook();
	b1.displaybook();
}
	

