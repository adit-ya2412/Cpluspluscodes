#include<iostream>
using namespace std;
class list{
	public:
		int data;
		int key;
		list *ptr;
		list(){
			data=0;
			key=0;
			ptr=NULL;
		}
};
class operationonlists{
	public:
		list *temp;
		void checknodekey(int k){
			temp=ptr;
			if(temp->key==k){
				cout<<"KEY EXISTS"<<endl;
				temp=temp->
				
			}
			else
			cout<<"GOOD TO GO"<<endl;
			
		}
		void appendnode(int d,int k){
			
			
		}
};
