#include<iostream>
#include<fstream>
using namespace std;
static int t=1;
class info
{
	private:
		int a,b;
		public:
			info()
			{
				a=t++;
				b=t++;
			}
			void op()
			{
				cout<<"A= "<<a<<" B="<<b<<endl;
			}
};
main()
{
	info ob[70],ob2[60];
	fstream fp;
	fp.open("k.cpp",ios::in|ios::out);
	fp.write((char*)&ob,sizeof(ob));
	fp.seekg(0,ios::beg);
	fp.read((char*)&ob2,sizeof(ob2));
	for(int i=0;i<60;i++)
	{
		ob2[i].op();
		
	}
	fp.close();
}
	

