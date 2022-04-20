#include<iostream>
using namespace std;
class A
{
	public:
	int n;
	
	int diff(int x)
	{
		int i=x,r,r1,t;
		while(i!=0)
		{
			r=i%10;
			i=i/10;
			r1=i%10;
			if(r1>r)
			{
				t=r;
				r=r1;
				r1=t;
				
			}
			if((r-r1)!=1)
			{
				return 0;
				break;
			}
			else
			return 1;	
		}
	}
	int count(int x)
	{
		int i=x,c=0;
		while(i!=0)
		{
			i=i/10;
			c++;
		}
		return c;
	}
};
int main()
{
	int d,check,i;
	A obj;
	cout<<"Enter the limit of series"<<endl;
	cin>>obj.n;
	for(i=0;i<(obj.n);i++)
	{
	d=obj.count(i);
	if(d>1)
	{
	    check=obj.diff(i);
	    if(check==1)
	    cout<<i<<endl;	
	}
	else
	cout<<i<<endl;
      }
}
	
