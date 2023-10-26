#include<iostream>
using namespace std;
class Date{
	private:int day,month,year;
	public://constr is special method
	       //constr name must be same as class name
	       //no return type not even void
	       Date(){
	       	cout<<"---Date Class Default Constr---"<<endl;
	       	//constr used for data member initialisation
	       	//default constr :constr with no arguments
	       	//default constr used for default values
	       	day=1;
	       	month=6;
	       	year=1990;       	
	       	    	
	       	
		   }
	//create parameter constr for assigning user provided values
	Date(int i,int j,int k){
		cout<<"----Date Parameter Constr-----"<<endl;
     	//i=day;
		//j=month;
	    //k=year;
		day=i;
		month=j;
		year=k;
		
	}
	
	
	
	void display(){
		cout<<"-----display Date----"<<endl;

  cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;

	}
	
};
int main()
{
	 Date dob;//default constr get invoked implicitly
	 dob.display();//
	
	
	//if i create 250 objects of Date class
	//how many times default constr get invoked:250
	
	cout<<"----------------"<<endl;
	
	//accept day month year from user
	cout<<"enter Day Month Year"<<endl;
	int d,m,y;
	cin>>d>>m>>y;
	
//	Date studDob;//default
	Date studDob(d,m,y);
	studDob.display();
	
	
	
	
//	Date d1,d2,d3,d4,d5,d6;
	
//	for(int i=1;i<=10;i++){
//	Date d1;	
//		
//		
//	}
	
	
	
	
	
	
	return 0;
}
