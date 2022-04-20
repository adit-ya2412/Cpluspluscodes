
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*left,*right;
};
struct node*root,*parent,*parent2;
 struct node* search(int item)
{
	node*p,* save;;
    if(root==NULL)
    {
     parent=NULL;
     return NULL;
    }

    else if(item==root->data)
    {
        parent=NULL;
        return root;
    }
    else if(item<root->data)
    {
        p=root->left;
        save=root;
    }
    else
    {
        p=root->right;
        save=root;
    }

    while(p!=NULL)
    {
        if(item==p->data)
        {
            parent=save;
            return p;
        }
      if(item<p->data)
      {
          save=p;
          p=p->left;
      }

      else
      {
          save=p;
          p=p->right;
      }
    }
    parent=save;
    cout<<"search was unsuccesuull"<<"\n";
    return NULL;

}
void insert(int item)
{
	node* loc=search(item);
	if(loc!=NULL)
     {
       return;
     }
	struct node*t=new node;
     //t=t->left;
	t->data=item;
	t->left=NULL;
	t->right=NULL;

	if (parent==NULL)
	{
		root=t;
	}

	else if(item<parent->data)
	parent->left=t;

	else
	parent->right=t;

	return ;
}
void delete(int item){
node *loc=search(item);
if(loc==NULL){
	cout<<"Element is not present"<<endl;
	return;
}
else{
	if(loc->left!=NULL&&loc->right!=NULL){
		void del_caseB(loc);
}

		
	}
}
}
void del_caseA(node *loc){
	if(loc->left==NULL&&loc->right==NULL){
		cout<<"Element deleted :"<<loc->data<<endl;
		loc=NULL;}
		else{
		if(loc->left==NULL){
			std::cout << "Element deleted:"<<loc->data << '\n';
			loc->data=loc->right->data;
			loc->right=NULL;
		}
		if(loc->right==NULL){
			std::cout << "Element deleted :"<<loc->data << '\n';
			loc->data=loc->left->data;
			loc->left=NULL;
		}
	}
}
void del_caseB(node* loc) {
node *temp=loc->right;node*save=loc;

while(temp->left!=NULL){
save=temp;
temp=temp->left;
}
node *suc=temp;
parent2=save;


}



	}
}

void preorder(node *r)
{
	struct node*p=r;
	if(r!=NULL)
	{
		cout<<p->data<<"\n";
		preorder(p->left);
		preorder(p->right);
	}
}
void inorder(node *r)
{
	struct node*p=r;
	if(r!=NULL)
	{
		preorder(p->left);
		cout<<p->data<<"\n";
		preorder(p->right);
	}
}
void postorder(node *r)
{
	struct node*p=r;
	if(r!=NULL)
	{
		preorder(p->left);
		preorder(p->right);
		cout<<p->data<<"\n";
	}
}


int main()
{
	insert(20);insert(30);insert(10);insert(50);

	cout<<"Preorder traversal of tree is:";
	preorder(root);
	cout<<"inorder traversal of tree is:";
	inorder(root);
	cout<<"Postorder traversal of tree is:";
	postorder(root);
}
