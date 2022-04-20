#include<iostream>
using namespace std;
class Test
{
	public:
		int x;
		void show_data();
};
int main()
{
	Test t;
	int Test::*ptr=&Test::x;
	//or
	//int test::*ptr;
	//ptr=&test::x;
	t.*ptr=20;
	t.x=25;
	t.show_data();
}
void Test::show_data()
{
	cout<<"\n x="<<x;
}


