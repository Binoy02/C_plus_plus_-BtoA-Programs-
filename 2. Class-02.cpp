/*
  Binoy Das Gupta
  Class(Basic-02)
  12-08-2021
*/

#include<iostream>
using namespace std;

class Employee
{
	public :
	string name;
	int age;
};

int main()
{
	Employee employee1;
	cout<<"Enter name : ";
	getline(cin,employee1.name);
	cout<<"Enter age : ";
	cin>>employee1.age;
	
	cout<<"\n\n";
	cout<<"Employee name : "<<employee1.name<<endl;
	cout<<"Employee age  : "<<employee1.age<<endl;
	
	return 0;
}
