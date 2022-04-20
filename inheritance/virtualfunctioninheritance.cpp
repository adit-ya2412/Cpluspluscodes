//Q3
#include<iostream>
using namespace std;
class baseclass
{
	protected :
		
		int x;
		public:
		virtual void task()=0;
};
class derivedclass:public baseclass
{
	public:
	void get_data1()
	{ 
	 cout<<"Enter the value of x";
	 cin>>x;
	 cout<<endl;
	}
	
	void task()
	{
		int i,f=1;
		for(i=1;i<=x;i++)
		{
			f=f*i;
		}
		cout<<"the factorial of "<<x <<"is "<<f;
	}
};
int main()
{
	baseclass *p;
	derivedclass obj;
	p=&obj;
	obj.get_data1();
	p->task();
	
}
