#include<iostream>
using namespace std;
int fabo(int r);
int  main() {
  int i,n;
  std::cout << "Enter the Range of Series" << '\n';
  cin>>n;
int s= fabo(n);
cout<<'\n'<<s;
/*  int fab[n];
  for(i=0;i<n;i++){
    if(i==0){
      fab[i]=0;
    }
    if(i==1){
      fab[i]=1;
    }
    if(i>=2){

      fab[i]=fab[i-1]+fab[i-2];
      cout<<fab[i]<<endl;
    }
  }
  i=0;
  while(i<n){
    std::cout << fab[i] << '\t';
    i++;
  }*/

  return 0;
}
int fabo(int r){
  int sum;
  if(r==0){
    return 0;
  }
  if(r==1){
    return 1;
  }
  else{
    std::cout <<fabo(r-1)+fabo(r-2)'\n';
  }
}
