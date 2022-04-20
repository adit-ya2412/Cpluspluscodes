#include<iostream>
using namespace std;
int sequentialsearch(int la[],int n,int item)
{
	int i=0,loc=0;
	while(i<n){
		if(la[i]==item)
		{
			loc=(i+1);
			break;
		}
		i++;
	}
	return loc;
}
int main(){
	int la[10]={1,3,5,7,8,9,10,67,89,99};
	int n=10;
	int item;
	cout<<"Enter the variable to be searched:";
	cin>>item;
	int loc=sequentialsearch(la,n,item);
	if(loc!=0)
	cout<<"Element found at location:"<<loc<<endl;
	else
	cout<<"Element not found"<<endl;
	return 0;
}
	
