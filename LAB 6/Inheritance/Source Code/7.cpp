/*7.Person and Student Inheritance:
Problem Statement: Model a system for handling individuals students within an educational institution. 
Create a base class Person with attributes like name and age. 
Derive a Student class with additional attributes like student ID and GPA, inheriting the common attributes from the Person class.*/

class PERSON
{
	protected:
		string name;
		int age;
		
	public:
		
		PERSON(string name,int age)
		{
			this->name=name;
			this->age=age;
		}
		
		void display()
		{
			cout<<"\nName - "<<name<<"Age - "<<age<<endl;
			
		}
		
}:
	
class STUDENT:public PERSON
{
	private:
		string name; int age;
		double gpa;
		string std_id;
		
	public:
		
		STUDENT(string name,int age,double gpa,string std_id):(name,age)
		{
			this->gpa=gpa;
			this->std_id=std_id;
		}
		
		void display()
		{
			cout<<"\nName - "<<name<<"Age - "<<age<<"Student Id - "<<std_id<<"GPA - "<<grade<<endl;
			
		}
};

int main()
{
	string name,std_id;
	double gpa;
	int age;
	
	STUDENT s(name,age,sd_id,gpa);
	
	
	
	
}



