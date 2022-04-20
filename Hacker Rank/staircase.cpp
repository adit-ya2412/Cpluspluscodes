#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of stair";
	cin>>n;
	int sp,i,j;
	for(i=n;i>0;i--)
	{
		for(sp=0;sp<i;sp++)
		{
			cout<<" ";
		}
		for(j=i;j<=n;j++)
		{
			cout<<"#";
		}
		cout<<endl;
	}
}
