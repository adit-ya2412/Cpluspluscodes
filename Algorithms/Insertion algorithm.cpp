#include<iostream>
using namespace std;
int main(){
	int n;
	
		int la[10]={1,3,5,7};
n=4;
int j=n-1;
cout<<"Enter the pos no:";
int k;
cin>>k;   
while(j>=(k-1))
{
	la[j+1]=la[j];
	j--;
}
cout<<"Enter the numeber to be inserted"<<endl;
int item;
cin>>item;
la[k-1]=item;

		for(int i=0;i<n+1;i++)
		{
			cout<<la[i]<<endl;
		}
		return 0;
	}
		
	

