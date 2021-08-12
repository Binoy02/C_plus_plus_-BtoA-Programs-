/*
  Binoy Das Gupta
  Class(Basic-01)
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
	employee1.name = "Binoy";
	employee1.age = 22;
	cout<<employee1.name<<endl;
	cout<<employee1.age<<endl;
	return 0;
}
