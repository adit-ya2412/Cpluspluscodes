#include<iostream>
using namespace std;
class A
{
	int a,b,*p,*q;
	public:
		void ip()
		{
			cout<<"\nClassA\nenter the two values";
			cin>>a>>b;
			p=&a;
			q=&b;
		}
		void op()
		{
			cout<<"\nClassA\n A="<<*p<<"B="<<*q;
			cout<<endl<<p--;}
};
main()
{
	A o1;
	o1.ip();
	o1.op();
}
