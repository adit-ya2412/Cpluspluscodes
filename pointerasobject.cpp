#include<iostream>
using namespace std;
class info
{
	private:
		int a;
		int b;
	public:
		void ip();
		void op();
		
	
};
main()
{
	info f1,f2;
	info *p=&f1;
	info  *q=&f2;
	f1.ip();
	f2.ip();
	(*p).op();
	q->op();
}
void info::ip()
{
	cout<<"Enter two values:";
	cin>>a>>b;
}
void info::op()
{cout<<"\nClass A \n A="<<a<<"B="<<b;
		}
