#include<iostream>
using namespace std;
class Const
{
	int x,y;
	public:
		Const(int a,int b)
		{
			cout<<"\nparamaterized Constructor called";
			x=a;
			y=b;
		}
		Const(int a)
		{
			cout<<"\n single parameterConstructor";
			x=a;
			y=a;
		}
		void show()
		{
			cout<<"the values are:"<<x<<" "<<y;
		}
};
int main()
{
	Const o1(9);
	Const o2(2,7);
	o1.show();
	o2.show();
		
}
