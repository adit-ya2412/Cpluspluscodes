#include<iostream>
using namespace std;

std::cout<<"Enter the size of array"<<endl;

int n;
cin>>n
int arr[n]  

void input(){
	int i=0;
	while(i<n){
		cout<<"Enter array element at:"<<(i+1)<<"postion:"<<endl;
		cin>>arr[i];
	}
}
int partition(int arr[],int start,int end){
	int i,j,r,temp;
	r=arr[end-1];
	i=start-1;
	j=start;
	while(j<=end-2){
		if(arr[j]<=r){
			i++;
			arr[j]=temp;
			arr[j]=arr[i];
			arr[i]=temp;
		}
		else j++;
	}
	i++;
	arr[i]=temp;
	arr[end-1]=temp;
	arr[i]=r;
	return i;
}
void quicksort(int arr[],int start,int end){
	if(start<end){
	 int q=partition(arr,start,end);
	 quicksort(arr,start,q-1);
	 quicksort(arr,q+1,end);	
	}
}
void display(){
	int i=0;
	while(i<n){
		cout<<"Element at pos:"<<(i+1)<<"is \n";
	}
}
int main(){
	quicksort(arr,0,n);
	display();
	
}
