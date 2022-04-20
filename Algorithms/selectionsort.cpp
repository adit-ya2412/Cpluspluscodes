//Selection sort
#include<iostream>
using namespace std;
void selectsort(int ar[],int s);
class sort{
	public:
	int i,n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
		int ar[n];
		
		cout<<"Enter the values of array"<<endl;
	

};
	void input(){
		
		while(i<n){
			
			cin>>ar[i];
			i++;
		}
		selectsort(ar,n);
	
		}
void selectsort(int ar[],int n){
	int i=0,j,temp,min,loc;
	

	while(i<(n-1))
{
	min=ar[i];
	
       j=i+1;
	while(j<n)
	{
		if(min>ar[j])
		{
		
		min=ar[j];
		loc=j;
		
		}
	}
	cout<<ar[i]<<"getting swapped by"<<ar[loc]<<endl;
	temp=ar[i];
	ar[i]=ar[loc];
	ar[loc]=temp;
	i++;
	
}
for(i=0;i<n;i++){
	cout<<ar[i]<<endl;
}
}
int main(){
	sort obj1;
	obj1.input();
	
}

