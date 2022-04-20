#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
 
int main()
{
	vector<int>arr;
	int n,i;
	cout<<"Enter size of array";
	cin>>n;
	int val;
	for(i=0;i<n;i++)
	{
	   cin>>val;
	   arr.push_back(val);	
	}
	for(i=0;i<n;i++)
	{
	   
	   cout<<arr.at(i)<<endl;	
	}
	int s;
	s=arr.size();
	cout<<s<<endl;
	
		 double pos=0, neg=0, zero=0;
    for(int i=0;i<s;i++)
    {
        if(arr.at(i)==0)
        {zero++;}
        if(arr.at(i)<0)
        {neg++;}
        if(arr.at(i)>0)
        {pos++;}
    }
    cout<<zero<<endl;
    cout<<setprecision(6)<<fixed<<(pos/s)<<endl;
    cout<<setprecision(6)<<fixed<<(neg/s)<<endl;
    cout<<setprecision(6)<<fixed<<(zero/s)<<endl;

}
	

