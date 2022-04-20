#include<iostream>
using namespace std;

template<class T>

class A
{
T x,y;
public:
void get()
{
cin>>x>>y;
}
void put()
{
cout<<x<<" "<<y<<endl;
}
};

main()
{
A <int> obj;
A <char> obj2;

obj.get();
obj.put();

obj2.get();
obj2.put();
}
