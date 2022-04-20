#include<iostream>
using namespace std;
void display(int ar[],int n){
	int i=0;
	while(i<n){
		cout<<"Value at index:\t"<<i<<"\t"<<ar[i]<<endl;
		i++;
	}
}
void merge(int arr[],int start,int mid,int end){
	cout<<"value of start mid and end:"<<start<<"\t"<<mid<<"\t"<<end<<endl;
	int n1=mid-start+1;
	int n2=end-mid;
	cout<<"value of n1 and n2 is \t"<<n1<<"\t"<<n2<<endl;
	int nsize1=n1+1;
	int nsize2=n2+1;
	int L[nsize1];
	int R[nsize2];
	int i,j,k;
	for(i=0;i<n1;i++){
		L[i]=arr[start+i];//Remember this is recurssion , elements are called from different index,so to divide u need to copy from given position not from i whic is 0 right now 
	}
	for(j=0;j<n2;j++){
		
		R[j]=arr[mid+1+j];
	}
	L[n1]=900;
	display(L,nsize1);
		cout<<"NExt temporary array:----------"<<endl;
	R[n2]=900;
	display(R,nsize2);
	cout<<"----------------new temprorary array is alloted"<<endl;
	i=0,j=0;
	for(k=start;k<=end;k++){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
	}
}
void mergesort(int arr[],int start,int end){
	if(start<end){
		int mid=((start+end)/2);
		cout<<"Value of start mid end :\t"<<start<<"\t"<<mid<<"\t"<<end<<endl;
		mergesort(arr,start,mid);
		//display(arr,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
int main(){
	int n;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int arr[n];
	int i=0;
	while(i<n){
		cout<<"enter element at positon:\t"<<i+1<<"\n";
		cin>>arr[i];
		i++;
	}
	mergesort(arr,0,n-1);
	display(arr,n);
}
