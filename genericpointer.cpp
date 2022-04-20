#include<iostream>
using namespace std;
main()
{
	int a=101;
	char c='A';
	double d=10.2343;
	void *p;
	p=&a;
	cout<<(*(int*)p)<<endl;
	p=&c;
	cout<<(*(char*)p)<<endl;
	p=&d;
	cout<<(*(double*)p);
}

