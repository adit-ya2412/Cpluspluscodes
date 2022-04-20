#include<iostream>
using namespace std;
/*int main()
{
	int x;
	int *ptr;

	x = 10;
	ptr = &x;
	*ptr = *ptr + 1;
	cout<< x;
return 0;
}*/
void main()
{
 int a=25,b=78,sum;
 int *x,*y;
 x=&a;
 y=&b;
  sum=*x + *y;
 cout<<" Sum is : ”<<sum;
}


