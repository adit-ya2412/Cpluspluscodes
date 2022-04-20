#include<iostream>
using namespace std;

class A
{
	 int a,b;

public:
void get();
void put();
 friend A operator*(A z,A y);
 friend int operator<=(A z, A y);
};
A operator*(A z,A y)
{
 A k;
 k.a=z.a*y.a;
 k.b=z.b*y.b;
 return k;
}
int operator<=(A z,A y)
{
      if ((z.a<=y.a)&& (z.b<=y.b))
      {
      	return 1;
      }
      else return 0;
}
void A::put()
{
cout<<a<<endl;
cout<<b<<endl;
}
void A::get()
{
	cin>>a;
	cin>>b;
}
main()
{
	A ob1;
	ob1.get();
	A ob2;
	ob2.get();
	A ob3;
    ob3=ob1*ob2;
    ob3.put();
    int s=(ob1<=ob2);
    if(s==1)
    {
    	cout<<"true"<<endl;
    }
	
}
 
