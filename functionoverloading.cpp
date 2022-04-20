#include<iostream>
using namespace std;
void sum(int,int);
void sum(double,double);
void sum(char,char);
main()
{
	int a,b;
	double c,d;
	char e,f;
	cout<<"Enter the value of integers\n";
		cin>>a>>b;
	sum(a,b);
	cout<<"Enter the value of doubles\n";
		cin>>c>>d;
	sum(c,d);

	cout<<"Enter the value of charcaters\n";
		cin>>e>>f;
	sum(e,f);
}
	void sum(int x,int y)
	{
		cout<<"\nTHe sum of integers are\n"<<x+y;
	}
	void sum(double x,double y)
	{
		cout<<"\nThe sum of doubles are\n"<<x+y;
	}
	void sum(char x,char y)
	{
		char z=x+y;
		cout<<"\n The sum of characters are\n"<<z;
	}

	
