#include<iostream>
using namespace std;

int main(){
	int *int_ptr{0}; 
int_ptr =new int;
cout<<int_ptr<<endl;
delete int_ptr;
cout<<endl;
int  size(0);
double *temp_ptr{0};
cout<<"how many temperature?";
cin>>size;
temp_ptr=new double[size];
cout<<temp_ptr;
delete [] temp_ptr;
return 0;
}
