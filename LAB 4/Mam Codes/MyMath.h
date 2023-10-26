#include<iostream>
using namespace std;
//BL
class MyMath{
	public :		
	void add(int a,int b){
		cout<<"Add = "<<(a+b)<<endl;
	}	
	void subs(int a,int b){
		cout<<"Subs = "<<(a-b)<<endl;
	}
	void max(int i,int j){
		if(i>j)
		cout<<"Max="<<i<<endl;
		else
		cout<<"Max="<<j<<endl;
	}
	void createArray(int size){	
		cout<<"creating array of size :"<<size<<endl;
     int *arr=new int[size];
     cout<<"Enter Numbers";
     for(int i=0;i<size;i++)
     {
     	cout<<"Enter ";
     	cin>>arr[i];
	 }
    cout<<"----Array elements----"<<endl;  
    for(int i=0;i<size;i++)
     {
     	cout<<arr[i]<<"  ";
     }



	}


};
