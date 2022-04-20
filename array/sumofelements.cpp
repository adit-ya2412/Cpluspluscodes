#include<iostream>
using namespace std;
class a
{
    int x,arr[10];
public:
    void input()
    {
        cout<<"Enter the the size of array";
        cin>>x;
        //arr[x];
        int i;
        for(i=0;i<x;i++)
        {
            cout<<"enter the element at"<<(i+1)<<"pos"<<endl;
         cin>>arr[i];
        }
    }
    int sum();
};
int a::sum()
{
    int i,s=0;
    for(i=0;i<x;i++)
    {
        s+=arr[i];
    }
return s;
}
 int main()
{
    a obj1;
    obj1.input();
    cout<<obj1.sum();
}
