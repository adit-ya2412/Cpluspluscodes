#include<iostream>
using namespace std;
class Test
{
	public:
		void show_msg(int);
};
void Test::show_msg(int x)
{
	cout<<"\nHello World!!"<<x;
}
int main()
{
	void (Test::*fp)(int)=&Test::show_msg;
        Test t;
        (t.*fp)(5);
        Test *ptr=&t;
        (ptr->*fp)(50);
}
