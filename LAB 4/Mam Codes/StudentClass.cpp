#include<iostream>
using namespace std;
class Student{
	private :int rollno;
	         string name,email,city;
	         double per;
	public://to initialise data memebrs
	//constr
	//no arguments then default
	   Student(){
	   	cout<<"----default----Student---"<<endl;
	   	rollno=1;
	   	name="ram";
	   	city="pune";
	   	email="ram@gmail.com";
	   	per=90;
	   }
	   
	   //parameter constr
	   Student(int rollno,string name,string email,string city,double per){
	   	cout<<"---parameter  --student-----constr-----"<<endl;
	   	
	   	this->rollno=rollno;
	   	this->name=name;
	   	this->city=city;
	   	this->email=email;
	   	this->per=per;
	   }
	   void print(){
	   	cout<<this->rollno<<"    "<<name<<"   "<<email<<"   "<<city<<"    "<<per<<endl;
	   }
	   //to edit/update/assign value to
	   //individual data member use methods(getters/setters)
	   
	   //getters:for reading /retriving values
	   //setters:for assigning/editing values
	   //synatx:getter
	   //ReturnType getDataMemberName(){return dataMemeber;}
	   //syntax :setter
       //void setDataMemeberName(dataType dataMember){//assignment;}	   
	   	//read-only:rollno
	   	//write  getter for rollno
	   	int getRollNO( )
	   	{
	   	return rollno;
		}
	   	//write setter for name,email,city
	   	void setName(string name){
	   	this->name=name;
		   }
	   	void setEmail(string email){
	   		this->email=email;
	   				   }
	   	void setCity(string city){
	   	this->city=city;	
		   }
			
		//getters
		string getName(){
			return name;
		}	
		string getCity(){
			return city;
		}
		string getEmail(){
			return email;
		}	
		double getPer(){
			return per;
		}	
			             
};
int main6(){	
	Student std1;//default
	
	std1.print();
	Student std2(102,"Sham","s@gmail.com","pune",89);//parameter
	std2.print();
	
	Student std3(103,"Ritu","r@a.c","mumbai",23);//
	std3.print();
	
	cout<<"1:create student 2:show stud  3:show email 4:show name  5:edit name 6:edit city 7:exit"<<endl;
	
	int ch;
	int rollno;
	string name,email,city;
	double per;
	Student newStud;//default
	do{
	cout<<"enter choice:  "<<endl;
	cin>>ch;
	switch(ch){
		
	case 1:cout<<"enter rollno name email city per "<<endl;
	       cin>>rollno>>name>>email>>city>>per;
	        //Student  newStud(rollno,name,email,city,per);//parameter
	        newStud.setName(name);
	        newStud.setEmail(email);
	        newStud.setCity(city);
		    cout<<"New Student created......"<<endl;
	        break;	
	case 2: newStud.print();break;	
	case 3:cout<<"display email :"<<newStud.getEmail()<<endl;break;
	case 4:cout<<"Name :"<<newStud.getName()<<endl;break;
	case 5:cout<<"Enter Name "<<endl;
	       cin>>name;
	       newStud.setName(name);
	       cout<<"Name is Updated...."<<endl;
	}	
	}while(ch!=7);
	cout<<"---Thank You-----"<<endl;
	
	
	
	
	
	
	
	return 0;
}









