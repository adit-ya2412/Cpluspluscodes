#include<iostream>
using namespace std;
class abc
{
	int a,b;
	public:
		void ip()
		{
			cout<<"\nEnter two values:";
			cin>>a>>b;		
		}
		void op()
		{
			cout<<"\nA="<<a<<"B="<<b;
		}
		friend void sum(abc);
};
int main()
{
	abc o1;
	o1.ip();
	o1.op();
	sum(o1);
}
void sum(abc z)
{
	cout<<"\nSum="<<z.a+z.b;
}
