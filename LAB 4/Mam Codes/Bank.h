#include<iostream>
using namespace std;
namespace BankApplication{
class Bank{

private:int actid;//must be auto inceremt 
        string name,email;
        double balance;
public:Bank(){
	   cout<<"--default---"<<endl;
	   this->actid=1;
	   this->name="Ram";
	   this->balance=1000;
	   this->email="r@gmail.com";
        }       
	   Bank(int actid,string name,string email,double balance){
	   	
	   	cout<<"--para Bank const---"<<endl;
	   	this->actid=actid;
	   	this->name=name;
	   	this->email=email;
	   	this->balance=balance;
	   	
	   }
	
	   //operation done by Bank
	   //withdraw
	   //deposite
	   
	   void withdraw(double amount){
	   	cout<<"--withdraw operations started-----"<<endl;
	   	this->balance=this->balance-amount;
	   	cout<<" balance afetr withdraw "<<this->balance<<endl;
	   } 
	   void deposite(double amount){
	   	cout<<"--deposite operations started-----"<<endl;
	   	this->balance=this->balance+amount;
	   	cout<<" balance afetr deposite "<<this->balance<<endl;
	   } 

       //can  edit/update
       //name email 
       void setEmail(string email){
       	this->email=email;
	   }
     double getBalance(){
     	return balance;
	 }
	 void display()
	 {
	 	cout<<actid<<"  "<<name<<"   "<<email<<"   "<<balance<<endl;
	 }
};



}

