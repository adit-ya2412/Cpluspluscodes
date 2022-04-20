#include<iostream>
#include<math.h>
using namespace std;
void evensump(){
    long int a,b;
  long double i,j;
  int c=0;
  cin>>a;
  std::cin >> b;
  /*i=a*b;
  cout<<i<<'\n';
  i=i/2;
  j=ceil(i);
  cout<<"Number of even pairs"<<j<<'\n'*/;


/*  for(i=1;i<=a;i++){
    for(j=1;j<=b;j++)
    {
      if((i+j)%2==0){
        c++;
      }
    }
  }*/
  //std::cout << "the number of pairs that are even:" <<c<< '\n';
}
int  main(){
  int op;
  do{
    evensump();
    cout<<"Press 1 to continue, else press 0:"<<'\n';
    cin>>op;
  }while (op==1);
}
