/*4. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class book
{
	private:
	int id;
	double price;
	string bname,author;
	
	public:
		book()
		{
			bname="Mahabharat";
			id=108;
			price=000.00;
			author="Krishna";
		} 
		
		book(string bname, double price, string author,int id)
		{
			this->id=id;
			this->price=price;
			this->author=author;
			this->bname=bname;
		}
		
		void display()
		{
			cout<<"Book Name - "<<bname<<"\nPrice - "<<price<<"\nAuthor - "<<author<<"\nID - "<<id<<endl;
		}
		
		
		int get_id()
		{
			return id;
		}
		int get_price()
		{
			return price;
		}
		string get_author()
		{
			return author;
		}
		string get_book_name()
		{
			return bname;
		}

		
		
		void set_price(int price)
		{
			
			this->price=price;
			
		}
		
		
		
};



int main()
{
	int id,ch;
	double price;
	string bname,author;
	
	cout<<"Enter ID - ";
	cin>>id;
	cout<<"\nEnter Book Name - ";
	cin>>bname;
	cout<<"\nEnter Author - ";
	cin>>author;
	cout<<"\nEnter Price - ";
	cin>>price;
	
	book b1(bname,price,author,id);
	
	cout<<"\n1. Display  2.Get ID  3.Get Price  4.Get Auhtor Name  5.Get Book Name  6.Set Price  7.Exit "<<endl;

	
	do
	{
		cout<<"\nEnter choice - ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				b1.display();
				break;
				
			case 2:
				cout<<b1.get_id();
				break;
			case 3:
				cout<<b1.get_price();
				break;
			case 4: 
				cout<<b1.get_author();
				break;
			case 5:
				cout<<b1.get_book_name();
				break;
			case 6:
				cout<<"Enter New Price - ";
				cin>>price;
				b1.set_price(price);
				break;
			default:
				cout<<"Enter a valid choice!!!";	
						
		}
	}while(ch!=7);
	
	
}
