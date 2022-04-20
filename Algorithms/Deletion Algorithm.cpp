#include<iostream>
using namespace std;
int main(){
	int la[10]={1,3,5,7,8,10,12};
	int n=7;
	int k;
	cout<<"ENter the positon of deletion"<<endl;
	cin>>k;
	k=k-1;
	while((k)<(n-1))
	{
		la[k]=la[k+1];
		k++;
	}
	n=n-1;
	for(int i=0;i<n;i++)
	
	{
		cout<<la[i]<<endl;
	}
}
	
