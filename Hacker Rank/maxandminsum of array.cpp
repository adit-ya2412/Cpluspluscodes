#include<iostream>
#include<vector>
using namespace std;

int  main()
{
	vector<long int>arr;
	
	int i;long int val;
	for(i=0;i<5;i++)
	{
		cin>>val;
		arr.push_back(val);
	}
	
	long int max=arr.at(0);
	long int min=arr.at(0);
	int maxind,minind;
	for(i=0;i<5;i++)
	{ 
	  if(max<(arr.at(i)))	
	  {
	  	max=arr.at(i);
	  	maxind=i;
	  	
	  	
	  }
	  
	  if(min>arr.at(i))
	  {
	  	min=arr.at(i);
	  	minind=i;
	  }
	}
	
	long int summin=0,summax=0;
	for(i=0;i<5;i++)
	{
		if(i!=maxind)
		{
		summin+=arr.at(i);
	       }
	       if(i!=minind)
	       {
	       	summax=summax+arr.at(i);
		}
	} 
	cout<<summin<<" "<<summax<<endl;
	
	}
	

