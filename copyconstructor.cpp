//suppose that 2 subj sci and maths
//copy marks from one student to other
//create class named
//marks and make use to copy the marks from 1 student to other.
#include<iostream>
using namespace std;
class marks
{
	public :
		int m,m1;
		void display()
		{
			cout<<"The mark of 2nd student is:"<<m1;
		}
		void input()
		{
			cout<<"Enter the marks of student1:";
			cin>>m;
		}

marks()
{
	m1=m;
}
};
int main()
{
	marks o1;
	o1.input();
	o1.display();
}
