#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *n;
};
node * insertlast(struct node*ptr);
node * insertbegin(struct node*ptr);
node * deletenode(int d,node*ptr);
void display(node*ptr);

node * create_node(struct node*ptr){
	node *head=ptr;
	int option;
	do{
	
	cout<<"Press 1 for inserting node at last \n Press 2 for inserting at beginning \n press 3 for deleting\n press 4 for Display\n"<<endl;
	
	cin>>option;
	switch(option){
	
		case 1:{
			head=insertlast(head);
			break;
		}
		case 2:{
			head=insertbegin(head);
			break;
		}
		case 3:{
			cout<<"Enter Element to be Deleted";
			int d;
			cin>>d;
			head=deletenode(d,head);
			break;
		}
		case 4:{
			display(head);
			break;
		}
		case 0:{
			break;
		}
		default:
			cout<<"Wrong input"<<endl;
}
}while(option !=0);
return head;
}
node * insertlast(struct node*ptr){
	node *head=ptr;
	int d;
	cout<<"Enter the value in node"<<endl;
	cin>>d;
	struct node *temp;
	temp=new node;
	temp->data=d;
	temp->n=NULL;
	if(head==NULL){
		head=temp;
		temp->n=NULL;display(head);
		return head;
	}
	else{
		struct node *count=head;
		while(count->n!=NULL){
			count=count->n;
		}
		count->n=temp;
		temp->n=NULL;display(head);
		return head;
}
}
node * insertbegin(struct node*ptr){
	node *head=ptr;
	int d;
	cout<<"Enter the node value"<<endl;
	cin>>d;
	struct node *temp;
	temp=new node;
	temp->data=d;//This is accessing data from pointer.
	temp->n=NULL;
	if(head==NULL){
		head=temp;
		display(head);
		return head;
	}
	else
	{
		temp->n=head;
		head=temp;
		display(head);
		return head;
	}
}
node * deletenode(int d,node *ptr){
	node *head=ptr;
	node *p=head;//this points to head node;
	if(head!=NULL){
	
	node *q=head->n;//this point to first node;
	if((q->data==d)&&(q->n==NULL)){
	
		node *ptr=head;
		head=NULL;
		delete(ptr);
		display(head);
		return head;
		
		
	}
     
     else
	if(p->data==d){
		delete(p);
		head=q;display(head);
		return head;
	}
	else
	while(q->data!=d){
		p=p->n;
		q=q->n;	
	}
	if(q->n==NULL){
		p->n=NULL;
		delete(q);display(head);
		return head;
	}
	else{
		p->n=q->n;
		delete(q);display(head);
		return head;
	}
	cout<<"LIST UPDATED"<<endl;
	display(head);
}
else{

cout<<"list is Empty";
return NULL;}
}

	void display(node *ptr){
		node *head=ptr;
	if(head==NULL){
		cout<<"List is EMPTY"<<endl;
	}
	else{
		struct node *count=head;
		while(count!=NULL)
		{
			cout<<"------>:"<<count->data<<"\t";
			count=count->n;
		}
		cout<<"\n";
	}

}
void display_rec(struct node *ptr){
		if(ptr==NULL){
			return;
		}
		cout<<ptr->data<<"-->"<<endl;
		display_rec(ptr->n);
	}
node *mergesortedlist(node *ptr,node *ptr1,node *m){
		node *new_head=NULL;
		if(ptr==NULL){
		return ptr1;}
		if(ptr1==NULL){
		return ptr;}
	//	if(ptr!=NULL&&ptr1!=NULL){
			if(ptr->data<=ptr1->data){
				m=ptr;
				ptr=ptr->n;
			}
			else{
				m=ptr1;
				ptr1=ptr1->n;
			}
			
	//	}
		new_head=m;
		while(ptr!=NULL&&ptr1!=NULL){
			if(ptr->data<=ptr1->data){
				m->n=ptr;
				m=ptr;
				ptr=ptr->n;
			}
			else{
				m->n=ptr1;
				m=ptr1;
				ptr1=ptr1->n;
			}
			
		}
		if(ptr==NULL){
			m=ptr1;
		}
		if(ptr1==NULL){
			m=ptr;
		}
		return new_head;
	}
int main(){
	node *h1;	node*head=NULL;node*head1=NULL;
      h1=create_node(head);

	node *h2;
	h2=create_node(head1);
	node *merge;
	node *head2=mergesortedlist(h1,h2,merge);
	display(head2);
	
}

