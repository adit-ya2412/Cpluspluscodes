#include <iostream>
using namespace std;
void display( char='*',int =10);
int main()
{
	cout<<"no argument passed:\n";
	display('#');
	cout<<"\nFirst argument passed:\n";
	display('$',5);
	return 0;
}
void display(char c,int n)
{
	for(int i=1;i<=n;++i)
	{
		cout<<c;}
}

