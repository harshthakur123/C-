/*5:Defines a Student class with attributes like name, age, and grade.
Initializes a vector of Student objects.
Allows the user to add new students to the vector with their name, age, and grade.
Prints the list of students.*/

#include<iostream>
using namespace std;
#include<vector>

class STUDENT
{
    private:
        string name;
        int age;
        char grade;

    public:
        STUDENT(string name,int age,char grade)
        {
            this->age=age;
            this->name=name;
            this->grade=grade;
        }


    void show_details()
    {
        cout<<"\nName  - "<<name<<"\nAge - "<<age<<"\nGrade - "<<grade<<endl;
    }
};

int main()
{
    vector<STUDENT>stud;
    int age,ch,count=0;
    string name;
    char grade;

    STUDENT s(name,age,grade);
    cout<<"\n1. Enter Details   2.Display details   3. EXIT"<<endl;
    
    do
    {
        cout<<"\nEnter choice - ";
        cin>>ch;
        switch(ch)
        {
            case 1:
               { count++;
                cout<<"\nEnter the details of student "<<count<<"  : ";
                cout<<"\nEnter name - ";
                cin>>name;
                cout<<"Enter Age - ";
                cin>>age;
                cout<<"Enter Grade - ";
                cin>>grade;
                STUDENT s(name,age,grade);
                stud.push_back(s);
                cout<<"\nData Stored Successfully!!!"<<endl;
                break;
               }
            case 2:
                {  count =0;
                    for(int i=0;i<stud.size();i++)
                {
                    
					count++;
					cout<<"\nStudent "<<count<<":";
					stud[i].show_details();
                }

                }

            case 3:
                break;

            default:
                cout<<"Invalid Input!!!";
        }
    }while(ch!=3);

}
