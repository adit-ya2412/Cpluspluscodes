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
void selection_sort(){
	int i,j,min;
	for(i=0;i<=(5-1);i++){
		min=arr[i];
		for(j=i+1;j<5;j++){
			if(min>arr[j]){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
			cout<<"elements after:"<<(i+1)<<"pass:"<<endl;
			display();
		}
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
	selection_sort();
       display();
}
		
			
		
	

