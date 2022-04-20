#include<iostream>
using namespace std;
//void swap(int*,int*);
//void swap(int,int);
void swap(int&,int&);
main(){
	int a=10,b=20;
	swap(a,b);
	//swap(&a,&b);

	cout<<a<<endl<<b;

}
//void swap(int x,int y)
//void swap(int*x,int*y)
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

