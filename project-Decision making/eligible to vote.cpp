#include<iostream>
using namespace std;
int main()
{
	int res,sib,age,i;
	string str;
	cout<<"Are you Indian resident?.If yes,enter 1....If no,enter 2\n";
		cin>>res;
	if(res==1)
	{
	cout<<"How many queries  you want to do?\n";
	cin>>sib;
	for(i=0;i<sib;i++)
	{
		cout<<"\nEnter name of person"<<" "<<i+1<<" :"<<endl;
		cin>>str;
		cout<<"Enter age of person"<<" "<<i+1<<" :"<<endl;
		cin>>age;
		if(age>=18)
		cout<<str<<" is elegible for voting\n";
		else
		cout<<str<<" is not elegible for voting\n";
		str.clear();		
		}
	}
	else 
	cout<<str<<" You are not elegible for voting\n";
		return 0;
	}
