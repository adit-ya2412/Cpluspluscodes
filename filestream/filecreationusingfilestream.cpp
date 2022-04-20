#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	string name;
	string title;
	ofstream outf("Item.cpp");
       outf.close();

       fstream fp;
       fp.open("Item.cpp",ios::out|ios::in);
       string s1;
       getline(cin,s1);
       while(s1!="@")
       {
       	fp<<s1<<endl;
       	getline(cin,s1);
	}
	fp.seekg(0,ios::beg);
	while(fp)
	{
		getline(fp,s1);
		cout<<s1<<endl;
	}
	fp.close();
}

