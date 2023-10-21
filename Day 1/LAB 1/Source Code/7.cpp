//7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
//(Hint: a, e, i, o, u are vowels)

#include<iostream>
using namespace std;
int main()
{
	char aph;
	bool flag=false;
	char a[10]={'A','E','I','O','U','a','e','i','o','u'};
	cout<<"Enter a letter: ";
	cin>>aph;
	for(int i=0;i<10;i++)
	{
		if(aph==a[i])
			{
			flag=true;
			break;
			}
		else
			flag=false;
		
	}
	if(flag==true)
		cout<<"The alphabet you have entered is vowel";
	else	
		cout<<"The alphabet you have entered is consonant";	
return 0;
}
