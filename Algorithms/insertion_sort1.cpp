#include<iostream>
using namespace std;
int arr[20];
void display();
void insert()
{
	int i=0;
	while(i<5){
		cout<<"Enter element at:"<<(i+1)<<"positon :"<<endl;
		cin>>arr[i];
		i++;
	}
}
void insertion_sort(){
	int i,j,key;
	for(i=1;i<5;i++){
		key=arr[i];
		for(j=(i-1);j>=0&&arr[j]>key;j--){
			arr[j+1]=arr[j];
			arr[j]=key;
		}
		cout<<"elements after:"<<(i+1)<<"pass:"<<endl;
		display();
	}
}
void display(){
	int i;
	for(i=0;i<5;i++){
		cout<<"Element at Index :"<<i<<"is :"<<arr[i]<<endl;
	}
}
int main(){
	insert();
	insertion_sort();
       display();
}
		
			
		
	


