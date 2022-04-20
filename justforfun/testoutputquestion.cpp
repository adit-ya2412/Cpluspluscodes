#include<iostream>
using namespace std;
class test
{static int i;
int j;
};
int test::i;
int main()
{
	cout<<sizeof(test);
	return 0;
}
