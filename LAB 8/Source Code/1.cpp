//1.Write a program to store characters 'A' to 'Z' in the file.Display the contents of file.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream file;
	file.open("Alpha.txt",ios::out);
	for(int i=65;i<=90;i++)
		{
			file<<char(i)<<" ";
		}
	file.close();
	cout<<"Data inserted successfully!!!";
}
