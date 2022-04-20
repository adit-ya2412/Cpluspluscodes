#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	//fstream fp;
	//fp.open("K2.cpp",ios::out);//When we use ios::in it cannot acess the new file,as ot wprks on exisistig file
	//if(fp==NULL)
	//cout<<"File open fail";
	//else
	//	cout<<"File open sucess";
	//	fp.close();
	char ch;
	fstream file;
	file.open("filecreation.cpp",ios::in|ios::out);
	while(ch!='.')
	{
		scanf("%c",&ch);
		//cin>>ch;
		file.put(ch);
	}
	file.seekg(0,ios::beg);
	file.get(ch);
	while(ch!='.')
	{
		cout<<ch;
		file.get(ch);
	}
	}  
	
