#include<iostream>
using namespace std;
#include<string>
class Customer
{
	public:
	string customer_name;
	float account_number;
	float dob;
	void display(){
		cout<<"\nThe name of customer is:"<<customer_name;
		cout<<"\n The account no of customer is:"<<account_number;
		cout<<"\n The date of birth of customer is:"<<dob;
	}
};
Customer(String name,float an,String dob)
{
	account_number=an;
	customer_name=name;
	this->dob=dob;
}
int main()
{
	Customer o1("Tanmay",11907576,"14-11-2001");
	o1.display();
}
