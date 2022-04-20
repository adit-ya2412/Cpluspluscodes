#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
node *top=NULL;
int pop()
{
	if(top==NULL){
		cout<<"Underflow"<<endl;
		return -1;
	}
	else{
		node *temp=top;
		int item=temp->data;
		top=top->link;
		delete temp;
		return item;
		
	}
}
void push(int d){
	node *n=new node;
	if(n==NULL){
		cout<<"Overflow";
	}
	else{
		n->data=d;
		n->link=top;
		top=n;
	}
	
}
void display(){
	node *i;
	for(i=top;i!=NULL;i=i->link){
		cout<<(i->data)<<endl;
	}
}
int main(){
	push(511);
	push(51);
	push(53);
	push(25);
	display();
	pop();
	pop();display();
}

