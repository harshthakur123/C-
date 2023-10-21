//19.Create menu driven program for Pizza Shop.And display total amount.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double sum=0,Pizza=200,Burger=150,Fries=100,Sandwich=80,Coffee=90;
	int choice;
	cout<<"\n 1.Pizza \n 2.Burger \n 3.Fries \n 4.Sandwich \n 5.Coffee \n 6.Exit"<<endl;
	
	do	
	{
	cout<<"Enter choice"<<endl;
	cin>>choice;
	
	if(choice==1)
		sum=sum+200;
	else if(choice==2)
		sum=sum+150;
	else if(choice==3)
		sum=sum+100;
	else if(choice==4)
		sum=sum+80;
	else if(choice==5)
		sum=sum+90;
	else if(choice>6)
		cout<<"Enter a valid choice"<<endl;
			
		
		
	}while(choice!=6);

cout<<"Total Amount = "<<sum;
	return 0;
}
	
		
		
	
	

