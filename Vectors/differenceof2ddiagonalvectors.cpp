#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> >ar;
    ar.resize(n,vector<int>(n));
    int i,j,sp=0,ss=0,st;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	cout<<"Enter element in"<<i << " "<<j<<"position";
            cin>>ar[i][j];
            if(j==i)
            {
        sp+=ar[i][j];
        //cout<<ar[i][j];
            }
        if((i+j==(n-1)))
        ss+=ar[i][j];
        }
    }
    
        if(sp>ss)
        st=sp-ss;
        else
        st=ss-sp;
        cout<<st;
     
    return 0;
}


    

