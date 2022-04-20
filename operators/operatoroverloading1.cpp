#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		void put()
		{
			cout<<a<<b;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
		void operator ++()
		{
			++a;
			++b;
		}
		void operator ++(int)
		{
			cout<<"post-fix";
			a++;
			b++;
		}
};
main()
{
	A ob; ob.get();
	++ob;
	ob.put();
	-ob;
	ob.put();
	ob++;
}
