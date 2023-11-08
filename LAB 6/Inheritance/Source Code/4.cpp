/*Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles. 
Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck.
Each derived class should have unique properties like the number of wheels and specific methods like start_engine().*/

#include<iostream>
using namespace std;

class VEHICLE
{
	protected:
		string fuel_type,name;
	
	public:
		VEHICLE(string name,string fuel_type)
		{
			this->fuel_type=fuel_type;
			this->name=name;			
		}	
		
		virtual void start_engine()
		{
			cout<<"Starting vehicles engine"<<endl;
			
		} 
		
		virtual void display_info()=0;
	
};

class CAR:public VEHICLE
{
	protected:
		string transmission;
	public:
		CAR(string name,string fuel_type,string transmission):VEHICLE(name,fuel_type)
		{
			this->name=name;
			this->fuel_type=fuel_type;
			this->transmission=transmission;
		}
		
		void start_engine() override
		{
			cout<<"Starting car's engine"<<endl;
		}	
		
		void airbag()
		{
			cout<<"Car has 4 airbags "<<endl;
		}
		
		void display_info()
		{
			cout<<name<<" runs on "<<fuel_type<<" and have "<<transmission<<endl;
		}

};

class MOTORCYCLE:public VEHICLE

{
	protected:
		int num_wheels;
	public:
		MOTORCYCLE(string name,string fuel_type,int num_wheels):VEHICLE(name,fuel_type)
		{
			this->name=name;
			this->fuel_type=fuel_type;
			this->num_wheels=num_wheels;
		}
		
		void start_engine
		()override
		{
			cout<<"Starting motorcycle engine"<<endl;
		}
		
		void riding_style()
		{
			cout<<"Motorcycle has unique riding style "<<endl;
		 } 
		
		void display_info()
		{
			cout<<name<<" runs on "<<fuel_type<<" and have " <<num_wheels<<" wheels "<<endl;
		}
		

};

class TRUCK: public VEHICLE
{
	private:
		string cargo_capacity;
	
	public:
		TRUCK(string name,string fuel_type,string cargo_capacity):VEHICLE(name,fuel_type)
		{
			this->cargo_capacity=cargo_capacity;
			this->name=name;
			this->fuel_type=fuel_type;
		}
		
		void start_engine()override
		{
			cout<<"Starting truck engine"<<endl;
		}
		
		void cargo__capacity()
		{
			cout<<"Trucks has large cargo capacity"<<endl;
		}
		
		void display_info()override
		{
			cout<<name<<" run on "<<fuel_type<<" and have "<<cargo_capacity<<" cargo capacity "<<endl;
		}
};


int main()
{
	CAR c("Santro","petrol","manual");
	MOTORCYCLE m("Bullet","petrol",2);
	TRUCK t("Enndeavour","petrol","large");
	
	c.start_engine();
	m.start_engine();
	t.start_engine();
	cout<<endl;
	
	c.airbag();
	m.riding_style();
	t.cargo__capacity();
	cout<<endl;
	
	c.display_info();
	m.display_info();
	t.display_info();
}


