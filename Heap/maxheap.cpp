#include<iostream>
using namespace std;
int tree[50];
int n=0;
void insertheap(int item){
  n=n+1;
  int ptr=n;int par;
  while(ptr>1){
    par=ptr/2;
    if(item<=tree[par]){
      tree[ptr]=item;
      return;
    }
    tree[ptr]=tree[par];
    ptr=par;
  }
  tree[1]=item;
}
void display(){
  for(int i=1;i<=n;i++){
    cout<<tree[i]<<"\t";
  }
}
  int main(){
    insertheap(23);
    insertheap(45);
    insertheap(21);
    insertheap(50);
    display();
  }
