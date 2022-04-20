
#include<iostream>
using namespace std;

struct node{
	int info;
	struct node *left,*right;

};
struct node *root,*par;

node*find(int item){
	node *loc,*ptr,*save;
	if (root==NULL){
		loc=NULL;
		par=NULL;
		return loc;
	}
	else {

	if(item==root->info){
		loc=root;
		par=NULL;
	}
	else{

		if(item<root->info){
		ptr=root->left;
		save=root;
		}
		else{
		    ptr=root->right;
		    save=root;
		}
			while(ptr!=NULL){
		if(item==ptr->info){
		    loc=ptr;
		    par=save;
		    return loc;
		}
		else if(item<ptr->info){
			save=ptr;
			ptr=ptr->left;
		}
		else{
			save=ptr;
			ptr=ptr->right;
		}


	               }
	                     loc=NULL;
	                     par=save;
	                     return loc;
       }
}
}
    void insert(int item){
        node *loc=find(item);

        if(loc==NULL){
        	 struct node *temp=new node;
        	 temp->left=NULL;
        	 temp->right=NULL;
            if(par==NULL){
                root=temp;
                temp->info=item;
            }
            else{
                if(item<par->info){
                    par->left=temp;
                    temp->info=item;
                }
                else{
                    par->right=temp;
                    temp->info=item;
                }
            }
        }
            else{
                return;
            }
        }
        void preorder(node *ptr){
        	if(ptr!=NULL){
        		cout<<ptr->info<<"\n";
        		preorder(ptr->left);
        		preorder(ptr->right);
		 }
	 }
	 void inorder(node*ptr){
	 	if(ptr!=NULL){
	 		inorder(ptr->left);
	 		cout<<ptr->info<<"\n"<<endl;
	 		inorder(ptr->right);

		 }
	 }
	  void postorder(node*ptr){
	 	if(ptr!=NULL){
	 		postorder(ptr->left);
	 		postorder(ptr->right);
	 		cout<<ptr->info<<endl;
		 }
	 }
	 int main(){
	 int option;

	 do{
	 	 cout<<"Enter 1 for searching an Element in Tree::: \n Enter 2 for Inserting node in Tree \n";
	 cout<<"Enter 3 for Inorder traversal \n Enter 4 for preorder\n Enter 5 for Postorder\n";
	 cin>>option;
	 switch(option){
		case 0:
			break;
		case 1:{
		    cout<<"Enter the item to be searched\n";
		    int n;
		    cin>>n;
		    node *ptr=find(n);
		    if(ptr!=NULL){
		        cout<<"Found after :"<<ptr->info<<"\n";
		    }
		    else{
		        cout<<"Not Found"<<endl;
		    }
		}
		case 2:
		{
		    int n;
		    cout<<"Enter the Element to be inserted"<<endl;
		    cin>>n;
		    insert(n);
		    break;
		}
		case 3:
		{
		    inorder(root);
		    break;
		}
		case 4:{
		    preorder(root);
		    break;
		}
		case 5:{
		    postorder(root);
		    break;
		}
	 }
	 }while(option!=0);
	}
