#include<iostream>
using namespace std;
int main() {
 int arr[5];
 int i,va=1,vb=1,vp=0;
 int tva=0,tvb=0,tp=0;
 for(i=0;i<5;i++){
   cin>>arr[i];
 }

   if(arr[0]!=1||arr[2]!=1){
     while(tp<arr[4]){

     if(va>=arr[0]){
       tva=tva+arr[1];
     }
     else va++;
     if (vb>=arr[2]){
       tvb=tvb+arr[3];
     }
     else vb++;
     tp=tva+tvb;
     vp++;
     //cout<<tp<<'\n'<<vp<<'\n';

}
}
 else{
   tva=arr[1];
   tvb=arr[3];
   int tt=tva+tvb;
   while(tp<=arr[4]){
      tp=tp+tt;
      vp++;
     //cout<<tp<<'\n'<<vp<<'\n';

   }

 }
 std::cout<<vp << '\n';
  return 0;
}
