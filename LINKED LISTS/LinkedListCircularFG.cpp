#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next;

};
struct node* start;

void insertBegin(int d)
{
node *t= new node;
t->data=d;

if(start==NULL)
{
start=t;  t->next=t;
}
else
    {
        node *p=start;
        while(p->next!=start)
        { p=p->next;}

        p->next=t;
        t->next=start;
        start=t;
    }

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
    do
    {
    cout<<p->data<<"\t";
    p=p->next;
    }while(p!=start);
    cout<<endl;
    }
}
void insertLast(int da){
	node *n1=new node;
	n1->data=da;
	if(start==NULL){
		start=n1;
		n1->next=start;
		
	}
	else{
		node *p=start;
		while(p->next!=start){
			p=p->next;
			
		}
		n1->next=start;
		p->next=n1;
	}
}
void insertAfternode(int item,int da){
	node *ptr=start;
	node *n1=new node;
	int flag=0;
	if(start==NULL){
		cout<<"List is Empty"<<endl;
		delete n1;
	}
	else
	{ 
	do{
	
	    if((ptr->data==item)&&(ptr->next==start)){
	     	n1->data=da;//da is value of new node;
	     	node *ptr1=ptr->next;
	     	n1->next=ptr1->next;
	     	ptr1->next=n1;
	     	flag=1;
	       break;
	     }
	     else{
	     
		
			if(ptr->data==item){
				node *n1=new node;
				n1->data=item;
				n1->next=ptr->next;
				ptr->next=n1;
				flag=1;
				break;
			}
				else{
				ptr=ptr->next;
			       }
	       }
			
		}while(ptr!=start);
	    }
	    if(flag==0){
	    	cout<<"Node not found"<<endl;
	    	delete n1;
	    }
	    else
	    display();
	
}

int main()
{

 //insertBegin(20);
  //insertBegin(22);
  //insertBegin(23);
  insertLast(29);
   insertLast(20);
    insertLast(19);
  insertAfternode(29,10);
  display();

}
