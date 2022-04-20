#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string line;
 ofstream fout;
 fout.open("country");
 fout<<"usa\n";
 fout<<"uk\n";
 fout<<"india\n";
 fout.close();
 fout.open("Capital");
 fout<<"washington\n";
 fout<<"London\n";
 fout<<"India\n";
 fout.close();
ifstream fin;
fin.open("country");
cout<<"contents of country file";
while(fin)
{
	getline(fin,line);
	cout<<line<<endl;
}
fin.close();
fin.open("Capital");
cout<<"contents of capital file";
while(fin.eof()==0)
{
	getline(fin,line);
	cout<<line<<endl;
}
fin.close();
}
