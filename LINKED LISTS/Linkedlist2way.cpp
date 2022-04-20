#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};
node *start=NULL;
node *last=NULL;
void insert_begin(int d){
	node *n1=new node;
	n1->data=d;
	
	if(start==NULL){
	n1->prev=NULL;
	n1->next=NULL;
	start=n1;
	last=n1;	
	}
	else{
		n1->prev=NULL;
		start->prev=n1;
		n1->next=start;
		start=n1;
	}
}
void del_node(int d){
	node *ptr=start;
	if(start==NULL){
		cout<<"List is Empty";
		return;
	}
	else if(ptr->data==d ||start==NULL){
		start=last=NULL;
		delete ptr;
		return;
	}
	else{
		if(last->data==d){
			node *ptr1=last->prev;
			ptr1->next=NULL;
			delete last;
			last=ptr1;
			return;
		}
		else{
			
		do{
		
		
			if(ptr->data==d){
				ptr->prev->next=ptr->next;
				ptr->next->prev=ptr->prev;
				delete ptr;
				return;
			}
			else {
				ptr=ptr->next;
			}
		}while(ptr->next!=NULL);
		
	}
	cout<<"NODE NOT FOUND"<<endl;
}
}
void insert_afternode(int d,int da){
	node *n1=new node;
	node *ptr=start;
	if(start==NULL){
		cout<<"List is EMpty"<<endl;
		n1->data=da;
		n1->prev=NULL;
		n1->next=NULL;
		start=n1;
		last=n1;
		return;
	}
	else{
			//Checking if there is only single element
		if(ptr->data==d||ptr->next==NULL){
			n1->data=da;
			n1->next=ptr->next;
			n1->prev=ptr;
			ptr->next=n1;
			last=n1;
			return;
		}
			else{
		do{
			//if node is in the middle of list
		if(ptr->data==d){
			n1->data=da;
			n1->next=ptr->next;
			ptr->next->prev=n1;
			n1->prev=ptr;
			ptr->next=n1;
			return;
		}
		else{
			ptr=ptr->next;
		}
		//if node is at the end;
			if(ptr->data==d||ptr->next==NULL){
			n1->data=da;
			n1->next=ptr->next;
			n1->prev=ptr;
			ptr->next=n1;
			last=n1;
			return;
		}
		}while(ptr->next!=NULL); 
	}
       }
       cout<<"NODE NOT FOUND";
}
void display()
{
if(start==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
    {
    node *p=start;
    cout<<" List contains  -->";
    while(p!=NULL)
    {
    cout<<p->data<<"\t";
    p=p->next;
    }
    cout<<endl;
    }
}
int main()
{

 insert_begin(17);
insert_begin(20);
  insert_begin(22);
  insert_begin(23);
  insert_afternode(17,18);
  del_node(20);
  display();

}
