#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
class A{
	public:
	int n,val;
	cout<<"Enter the size of array";
	cin>>n;
	vector<int>arr(n);
	
	void input()
	{
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter value at"<<(i+1)<<"Position"<<endl;
		cin>>val;
		arr.push_back(val);
	}
A::void plusMinus(vector<int> arr);
       }
};
       int main(){
       	A i1;
       	i1.input();
       	i1.plusMinus(vector<int>arr);
       	return 0;
       	
	}
	void plusMinus(vector<int> arr) { 
    int n=arr.size();
    int pos=0, neg=0, zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {zero++;}
        if(arr[i]<0)
        {neg++;}
        if(arr[i]>0)
        {pos++;}
    }
    cout<<setprecision(6)<<(pos/n);
    cout<<setprecision(6)<<(neg/n);
    cout<<setprecision(6)<<(zero/n);

}
