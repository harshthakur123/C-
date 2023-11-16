/*4:Create a C++ program that does the following:
Initializes an empty vector of integers.
Asks the user to enter a series of integers and adds them to the vector until the user enters a specific sentinel value (e.g., -1).
Prints the elements of the vector.
Calculates and prints the sum and average of the values in the vector.*/


#include<iostream>
#include<vector>
using namespace std;


int main()
{	int count=0,n;
	double sum=0;
	vector<int>data;
	cout<<"-------------Enter the numbers-----------"<<endl;
	while(n>=0)
	{	count++;
		cout<<"Enter number "<<count<<" - ";
		cin>>n;
		if(n<0)
		{
			break;
		}
		data.push_back(n);
	}
	for(int i=0;i<data.size();i++)
	{
		sum=sum+data[i];
		
	}
	cout<<"\nSum - "<<sum<<"\nAverage - "<<sum/data.size();
	
}

