ertrdsdf
.stream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string name;
	float  cost ;
	ofstream outf("item.doc");
	cout<<"enter item name"<<endl;
	cin>>name;
	outf<<name;
	cout<<"Enter the cost";
	cin>>cost;
	outf<<cost;
	outf.close();
}
