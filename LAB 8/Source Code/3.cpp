//3:Write a program to copy the contents of one file and write it into another file and print it.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string message,med;
	fin.open("fin.txt",ios::out);
	cout<<"Enter Message - ";
	cin>>message;
	fin<<message;
	cout<<"Data Stored Successfully!!!";
	fin.close();
	//char arr[6];
	
	
	fstream fout;
	fout.open("fin.txt",ios::in);
	while(getline(fout,message))
	{
		cin>>med;
		cout<<message;
	}
	cout<<"hello";
	
	//fout.get(arr,5);
	fout.close();
	
//	cout<<arr[0]<<arr[1];
	 
	fstream fset;
	fset.open("fout.txt",ios::out);
	fset<<med;	
	fset.close();
	 
	
	
	
	
	
}
