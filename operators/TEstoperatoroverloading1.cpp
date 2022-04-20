//Q1
#include<iostream>
using namespace std;
class A
{
 public:
 int x,y;
 void setdata();
 void showdata();
 A operator -(A c)
 {
 A temp;
 temp.x=x-c.x;
 temp.y=y-c.y;	
 	return(temp);
 }
 friend A operator %(A,A);
};
void A::setdata()
{
	cout<<"Enter the first number";
	cin>>x;
	cout<<"Enter second number";
	cin>>y;
}
A operator %( A t ,A z)
{
	A temp;
	temp.x=t.x%z.x;
	temp.y=t.y%z.y;
	return temp;
}
void A::showdata()
{
	cout<<x<<" "<<y;
}
int main()
{
	A c1;
	A c2;
	c1.setdata();
	c2.setdata();
	A c3;
	c3=c1-c2;
	c3.showdata();
	cout<<endl;
	c3=c1%c2;
	c3.showdata();
}
