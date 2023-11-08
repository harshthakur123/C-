/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes.
Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish.
Each of these derived classes should have specific properties and methods related to their respective categories of animals.*/

#include<iostream>
using namespace std;

class ANIMAL
{
	protected:
	string name,habitat;
	
	public:
	ANIMAL(string name,string habitat )
	{
		this->name=name;
		this->habitat=habitat;
	}
	
	virtual void speak()
	{
		cout<<"Animals make different sounds."<<endl;
		
	}
	

	virtual void move()
	{
		cout<<"Animals move in different ways."<<endl;
		
	}
	

};

class MAMMAL:public ANIMAL
{
	private:
		string furcolour;
		
	public:
		MAMMAL(string name,string habitat,string furcolour):ANIMAL(name,habitat)
			{
				this->name=name;
				this->habitat=habitat;
				this->furcolour=furcolour;
			}
			
		void speak()override
		{
			cout<<"\nMammals make various sound."<<endl;
			
		}	
		
		void move()override
		{
			cout<<"\nMammals walk or run."<<endl;
		}
		
		void showdetails()
		{
			cout<<"\n"<<name<<" have "<<furcolour<<" furcolour and lives in "<<habitat<<endl;
			
		}
};

class BIRD:public ANIMAL
{
	private:
		string wingspan;
	public:
		BIRD(string name,string habitat,string wingspan):ANIMAL(name,habitat)
		{
			this->name=name;
			this->habitat=habitat;
			this->wingspan=wingspan;
			
		}
		
		void speak()override
		{
			cout<<"\nBirds chirp or sing."<<endl;
		}
			
		void move()override
		{
			cout<<"\nBirds fly."<<endl;
			
		}
		
		void showdetails()
		{
			cout<<"\n"<<name<<" have "<<wingspan<<" wingspan and lives in "<<habitat<<endl;
		}
		
		
		
};

class FISH:public ANIMAL
{	private:
	string bloodtype;
	
	public:
		FISH(string name,string habitat,string bloodtype):ANIMAL(name,habitat)
		{
			this->name=name;
			this->habitat=habitat;
			this->bloodtype=bloodtype;
		}
		
	void speak()override
	{
		cout<<"\nFish do not make sound."<<endl;
	}
	
	void move()override
	{
		cout<<"\nFish swims."<<endl;
	}
	void showdetails()
	{
		cout<<"\n"<<name<<" is "<<bloodtype<<" and lives in "<<habitat<<endl;
	}
		
};


int main()
{
	MAMMAL bear("Bear","land","Black");
	FISH shark("Shark","water","cold blooded");
	BIRD eagle("Eagle","air","large");
	
	bear.move();
	shark.move();
	eagle.move();
	
	bear.speak();
	shark.speak();
	eagle.speak();
	
	bear.showdetails();
	shark.showdetails();
	eagle.showdetails();
	
}
