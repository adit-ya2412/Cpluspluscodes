#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the age"<<endl;
	cin>>n;
	vector<int>arr(n);
	int val;
	for(i=0;i<n;i++)
	{
		cin>>val;
		arr.at(i)=val;
	}
     int maxheight=arr.at(0);
    // cout<<maxheight<<endl;
     int c=0;
     for(i=0;i<n;i++)
     {
     	if(maxheight<=arr.at(i))
     	{
     	   maxheight=arr.at(i);
	}
     }
    // cout<<maxheight<<endl;
     for(i=0;i<n;i++)
     {
     	if(maxheight<=arr.at(i))
     	{
     		c++;
	     }
     }
     
     cout<<"No of candles that can be blown:"<<c<<endl;
     
}
