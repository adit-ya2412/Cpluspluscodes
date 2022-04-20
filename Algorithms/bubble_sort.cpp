#include<iostream>
using namespace std;
int arr[20];
void insert()
{
	int i=0;
	while(i<5){
		cout<<"Enter element at:"<<(i+1)<<"positon :"<<endl;
		cin>>arr[i];
		i++;
	}
}
void bubble_sort(){
	int i,j,bubble;
	for(i=0;i<5;i++){
		bubble=arr[0];
		for(j=1;j<5-i;j++){
			
			if(bubble>arr[j]){
				arr[j-1]=arr[j];
				arr[j]=bubble;
				
				bubble=arr[j];	
			}
			else{
			
				bubble=arr[j];
			}
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
	bubble_sort();
       display();
}
		
			
		
	


