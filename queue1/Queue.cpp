#include<iostream>
using namespace std;	int front=-1,rear=-1;
int arr[50];
int mc=5;

void insertinqueue(int item){


if((front==0&&rear==(mc-1))||(front==rear+1)){

	cout<<"overflow"<<endl;
	return;
}
else if(front==-1&&rear==-1){
	front=0;
	rear=0;
}
else if(rear==(mc-1)){
	rear=0;
	
}
else{
	rear++;
}

       arr[rear]=item;
	cout<<"inserted "<<item<<endl;  
}
int delete_inqueue(){
	if(rear==-1){
		cout<<"Underflow"<<endl;
		
	}
	int item=arr[front];
	if(front==rear){
		front =-1;
		rear=-1;
		cout<<"deleted"<<endl;
		
	}
	else if(front==(mc-1)){
		front=0;
		cout<<"deleted"<<endl;
	}
	else{
		front=front+1;
		cout<<"deleted"<<endl;
	}
	return item;
	
}


/*void display(){
	int i,j;
	if(front=-1){
		return;
	}
	  else {
	  	if(front<=rear){
	  		for(i=front;i<=rear;i++){
	  			cout<<arr[i];
			  }
		  }
		  else{
		  	for(i=front;i<mc;i++){ cout<<arr[i];
			  }
			  for(j=0;j<=rear;j++){
			  	cout<<arr[j];
			  }
		  }
	  }
	}
	*/
	void display()
{
if (front==-1 && rear==-1)
{
cout<<"underflow"<<endl;
return;
}

else
{
int i=front;
do
{
if(i>mc-1)
{
i=-1;
}
else
{
cout<<arr[i]<<"-->";
}

++i;
}while(i!=rear+1);
cout<<endl;
}

}
int main(){


	insertinqueue(3);
       display();
       insertinqueue(34);
       insertinqueue(67);
       display();
       int item;
      item =delete_inqueue();
      cout<<"deleted"<<item<<endl;
       item=delete_inqueue();
        cout<<"deleted"<<item<<endl;
       display();
       insertinqueue(44);
       insertinqueue(50);
       insertinqueue(100);
       cout<<front;
       cout<<rear;
       display();
       cout<<front;
       cout<<rear;
       
}
