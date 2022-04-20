#include<iostream>
using namespace std;
int n;
int partition(int arr[],int start,int end){
	int i,j,r,temp;
	r=arr[end];
	cout<<"value of pivot is: \t"<<r<<endl;
	i=start-1;
	cout<<"starting index \t"<<i<<endl;
	j=start;
	while(j<=end-1){
		if(arr[j]<=r){
			i++;
			cout<<"increased index:\t"<<i<<endl;
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			j++;
		}
		else {
			cout<<"Value of j \t"<<arr[j]<<endl;
	     j++;
	     }
	}
	i++;
	temp=arr[i];

	arr[end]=temp;
	arr[i]=r;
	cout<<"value of Index \t"<<i<<endl;
	return i;
}
int main(){
	cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
	int i=0;
	while(i<n){
		cout<<"Enter array element at:"<<(i+1)<<"postion:"<<endl;
		cin>>arr[i];
		i++;
}
partition(arr,0,n-1);
 i=0;
	while(i<n){
		cout<<"Element at pos:"<<(i+1)<<"is \t";
		cout<<arr[i]<<endl;
		i++;
	}
}
