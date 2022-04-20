//Q4
#include<iostream>
using namespace std;
class A
{
	private:
		int upper_limit,lower_limit;
	public:
		A()
{
	int x,y;
	cout<<"Enter Upper limit:";
	cin>>x;
	cout<<"Enter lower limit:";
	cin>>y;
			int r;
			upper_limit=x;
			lower_limit=y;
			if(x>y)
			{ 
			  r=primecheck(upper_limit,lower_limit);
			  cout<<"Count of primenumbers is:"<<r;
			}
			else 
			cout<<"Upper limit is less than lower limit";
		}

		int primecheck(int up,int low)
		{
			int i=up;
			int j=low;
			int l,c=0,count=0;
			while(j!=i)
			{
				for(l=2;l<j;l++)
				{
				   if(j%l==0)
				   {
				   	c++;
				   }	
				}
				if(c==2)
				{
					count++;
					c=0;
					j++;
				}
				else 
				{
					j++;
					c=0;
				}
				
			 } 
			 return count;
		}
};
int main()
{
	A obj;
	
}
