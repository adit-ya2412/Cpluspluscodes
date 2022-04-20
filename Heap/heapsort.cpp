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
int delheap(){
  int item=tree[1];
  int last=tree[n];
  n=n-1;
  int ptr=1;
  int left=2;
  int right=3;
  while(right<=n){
    if(last>=tree[left]&&last>=tree[right]){
      tree[ptr]=last;
      return item;
    }
    if(tree[right]<=tree[left]){
      tree[ptr]=left;
      ptr=left;
    }
    else{
      tree[ptr]=tree[right];
      ptr=right;
    }
    left=2*ptr;right=left+1;
  }
  if (left==n&&last<tree[left]) {
    tree[ptr]=tree[left];
    ptr=left;
  }
  tree[ptr]=last;
  return item;
}
void heap_sort(){
int temp;
std::cout << "Enter how many vlaues" << '\n';
int N;
cin>>N;
cout<<"Enter the Values"<<'\n';
for(int i=0;i<N;i++){
  cin>>temp;
  insertheap(temp);
}
display();
while(n>1){
  int t=delheap();
  tree[n+1]=t;
}
int j=1;
while(j<=N){
  std::cout << "at pos:"<<j<<"Value is :"<<tree[j] << '\n';
  j++;
}

}
  int main(){
    heap_sort();
    }
