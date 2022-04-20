#include<iostream>
using namespace std;
class B;
class A
{
	int a,b;
	public:
	void ip()
	{
		cout<<"\nClass A\nEnter two values";
		cin>>a>>b;
	}
	void op()
	{
cout<<"\nclass A\n A ="<<a<<"\n B ="<<b;
	}
	friend class C;
	//friend void sum(A z, B y);
		
};
class B
{
	int c,d;
	public:
	void ip()
	{
		cout<<"\nClass B\nEnter two values";
		cin>>c>>d;
	}
	void op()
	{
		cout<<"\nclass B\n C="<<c<<"\n D="<<d;
	}
	friend class C;
	//friend void sum(A z, B y);
		
};
class C
{
	public:
		void sum(A z,B y )
		{
			cout<<"\n Sum of Class A"<<z.a+z.b;
			cout<<"\n Sum of class B"<<y.c+y.d;
		}
};
//void sum(A z, B y){cout<<"\n Sum of Class A"<<z.a+z.b;cout<<"\n Sum of Class B"<<y.c+y.d;}//
int main()
{
	A o1;
	B o2;
	o1.ip();
	o2.ip();
	o1.op();
	o2.op();
	sum(o1,o2);
}
