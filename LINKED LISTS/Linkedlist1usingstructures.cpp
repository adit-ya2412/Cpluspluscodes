#include<iostream>
using namespace std;
void display();
struct node *head=NULL;
struct node{
	int data;
	struct node* n;
};

//head = NULL;//This signifies that node is empty.
void insertbegin(){
	int d;
	cout<<"Enter the node value"<<endl;
	cin>>d;
	struct node *temp;
	temp=new node;
	temp->data=d;//This is accessing data from pointer.
	temp->n=NULL;
	if(head==NULL){
		head=temp;
	}
	else
	{
		temp->n=head;
		head=temp;
	}
	cout<<"NODE INSERTED AT THE START"<<endl;
display();
}
node* search(int d){
	if(head==NULL){
		cout<<"List is Empty"<<endl;
		return NULL;
	}
	else{
		node *ptr=head;
		while(ptr!=NULL){
			if(ptr->data==d){
				return ptr;
				
			}
			else
			ptr=ptr->n;
		}
			cout<<"NODE NOT FOUND"<<endl;
		}
			return NULL;
}

void deletenode(int d){
	node *p=head;//this points to head node;
	if(head!=NULL){
	
	node *q=head->n;//this point to first node;
	if((q->data==d)&&(q->n==NULL)){
	
		node *ptr=head;
		head=NULL;
		delete(ptr);
		display();
		
	}
     
     else
	if(p->data==d){
		delete(p);
		head=q;
	}
	else
	while(q->data!=d){
		p=p->n;
		q=q->n;	
	}
	if(q->n==NULL){
		p->n=NULL;
		delete(q);
	}
	else{
		p->n=q->n;
		delete(q);
	}
	cout<<"LIST UPDATED"<<endl;
	cout<<"The head of list is now:"<<head->data<<endl;
	display();
}
else
cout<<"LIST IS EMPTY"<<endl;
}
void del_nodebypos(node *head,int position){
	node *ptr=head;
    node *ptr1=ptr->n;
     node*temp;
    int i=2;
    if(position==0&&ptr1->n==NULL){
       temp=head;
        delete temp;
        head=NULL;
        return ;

    }
    else{
        if(position==0){
         temp=ptr; 
         head=ptr1;
         delete temp;
         return ;
        }
        else{
    while(i<=position){
        ptr=ptr->n;
        ptr1=ptr1->n;
        i++;

    }
    if(ptr1==NULL){
        ptr->n=NULL;
        delete ptr1;
        return ;
    }
    else{
        temp=ptr->n;
        ptr->n=ptr1;
        delete temp;
        return ;
    }
     }
       }
}

void insertlast(){
	int d;
	cout<<"Enter the value in node"<<endl;
	cin>>d;
	struct node *temp;
	temp=new node;
	temp->data=d;
	temp->n=NULL;
	if(head==NULL){
		head=temp;
		temp->n=NULL;
	}
	else{
		struct node *count=head;
		while(count->n!=NULL){
			count=count->n;
		}
		count->n=temp;
		temp->n=NULL;
	}
	cout<<"NODE INSERTED IN LAST NODE:"<<endl;
	display();
}
void insertafternode(int datainfo,int dataofnode){
	node *a=search(dataofnode);
	struct node *t=new node;
	if(a==NULL){
		cout<<"THE LIST IS EMPTY"<<endl;
	}
	else
	{
		t->data=datainfo;
	   t->n=a->n;
	   a->n=t;
	   cout<<"NODE INSERTED"<<endl;
	   display();
		
	}
}
void display_reversenode(struct node *ptr);

void display(){
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

void display_reversenode(struct node *ptr){

	if(ptr==NULL){
		return;
	}
	display_reversenode(ptr->n);
	cout<<ptr->data<<endl;
	
	
	
}
void reversing_list(){
    node *temp,*prev,*next;
	temp=head;
	prev=NULL;
	while(temp!=NULL){
		next=temp->n;
		//cout<<next->data<<endl;
		temp->n=prev;
		prev=temp;
		//cout<<prev->data;
		temp=next;
	}
	head=prev;
	display();
	
}
int countnodes(){
	node *temp=head;
	int c=0;
	while(temp!=NULL){
		c++;
		temp=temp->n;
		
	}
	return c;
}
node * getmaxnode(){
	node *temp=head;
	node *pos;
	if(head==NULL){
		cout<<"LIST IS EMPTY"<<endl;
	}
	else{
		int m;
	m=temp->data;
	pos=temp->n;
	
		while(temp!=NULL){
			temp=temp->n;
			if(m<temp->data){
				m=temp->data;
				pos=temp->n;
			}
		}
		return pos;
	}
}
int main(){
//	struct node*count;
//	count=head;
//	display_reversenode(count);
/*	insertlast();
	insertlast();
	insertlast();
	insertbegin();*/
struct node *p;
	int option;
	
	do{
	cout<<"Enter THE OPERATION YOU WANT TO DO WITH LIST"<<endl;
	cout<<"PRESS 1 FOR INSERTING NODE AT LAST"<<endl;
	cout<<"PRESS 2 FOR INSERTING NODE AT Begining"<<endl;
	cout<<"PRESS 3 for getting number of nodes in list"<<endl;
	cout<<"press 4 for inserting a node after a particular node of particular value"<<endl;
	cout<<"press 5 for deleting a node conatining a given value"<<endl;
	cout<<"press 6 for printing reverse of node"<<endl;
	cout<<"press 7 to reverse the list"<<endl;
	cout<<"IF YOU WANT TO END,PRESS 0,ANYOTHER OPTION WILL RESULT IN WRONG INPUT"<<endl;
	cin>>option;
	
	switch(option){
		case 0:
			break;
		case 1:
		  insertlast();
		   break;
		case 2:
		  insertbegin();
		  break;	
		case 3:{
			
		
			int n=countnodes();
			cout<<"NUMBER OF NODES ARE:"<<n<<endl;
			break;
		}
	       case 4:
		{
				int nov,nvti;
				cout<<"ENTER THE NODE VALUE YOU WANT TO INSERT after:"<<endl;
				cin>>nov;
				
				cout<<"Enter the node value of node to be inserted"<<endl;
				cin>>nvti;
				insertafternode(nvti,nov);
				break;
	       }
			case 5:
				{
					cout<<"Enter the value in node u wish to delete"<<endl;
				   int n;
				   cin>>n;
				   deletenode(n);
				   break; 
				   }
			case 6:{
				struct node*count;
	                     count=head;
				display_reversenode(count);
				break;
			}
			case 7:{
				cout<<"List reversed"<<endl;
				reversing_list();
				break;
			}	   
		default:
			cout<<"WRONG OPTION"<<endl;
	}
	
}while(option!=0);
return 0;
}

