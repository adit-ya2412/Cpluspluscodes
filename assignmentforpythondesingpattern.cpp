#include<iostream>
using namespace std;
int main(){
	int i , j,sp;
	//for(sp=4;sp>1;sp--){
	//	cout<<" ";
	//}
	//cout<<"1"<<endl;
	for(i=1;i<=4;i++){
			for(sp=4;sp>i;sp--){
			cout<<" ";
		}
		for(j=i;j>0;j--){
		cout<<j;
		}
	//	for(sp=i;sp>0;sp--){
	//		cout<<" ";
	//	}
	
		for(j=1;j<=i;j++){
			cout<<j;
		}
			for(sp=4;sp>i;sp--){
			cout<<" ";
		}
		cout<<endl;
	}
	
}
