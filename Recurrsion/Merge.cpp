#include<iostream>
using namespace std;
void output(int ar[],int n){
	int i=0;
	while(i<n){
		cout<<"at index:"<<i<<"value is \t"<<ar[i]<<endl;
		i++;
	}
}
void merge(int arr[],int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int nsize1=n1+1;
	
	int nsize2=n2+1;
	cout<<"size of L is:"<<nsize1<<"\n"<<"size of R is"<<nsize2<<endl;
	int L[nsize1];
	int R[nsize2];
	int i,j,k;
	for(i=0;i<n1;i++){
		L[i]=arr[p+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[q+1+j];
	}
	L[n1]=900;
	R[n2]=900;
	output(L,nsize1);
	cout<<"NExt temporary array:----------"<<endl;
	output(R,nsize2);
	cout<<"Sorted array:----------"<<endl;
	i=0,j=0;
	for(k=p;k<=r;k++){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else {
			arr[k]=R[j];
			j++;	
		}
	}
	/*int c=0;
	while(c<=r){
		cout<<arr[c]<<"\t";
		c++;
	}*/
	
}
int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
int i=0;
while(i<n){
	cout<<"Enter element at position:"<<(i+1)<<endl;
	cin>>arr[i];
	i++;
}
int mid=(n-1)/2;
cout<<"Value of middle index and end index"<<mid<<"\t"<<n-1<<endl;
merge(arr,0,mid,n-1);
output(arr,n);
}
 
