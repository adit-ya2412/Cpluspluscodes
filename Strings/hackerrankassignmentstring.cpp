#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){


		string s1,s2;//hr;
        	int size;
        	int hr,min,se;
        	
              
	cout<<"Enter the value of String"<<endl;
	getline(cin,s1);
		stringstream geek(s1);
	cout<<s1<<endl;
	geek>>hr;
	
	cout<<hr<<endl;
//	hr+=s1.at(1);
	cout<<hr<<endl;
/**	if(s1.at(9)=='P'){
		hr=s1.at(0)+s1.at(1);
		cout
		min=s1.at(3)+s1.at(4);
		se=s1.at(6)+s1.at(7);
		cout<<hr<<endl;
		
	}
	**/
	size=s1.length();
	cout<<size<<endl;
       return 0;
}
