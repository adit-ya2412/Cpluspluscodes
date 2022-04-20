#include <iostream>
#include<math.h>
using namespace std;
void vaccine(){
  long long int d,n,da=0,t,i;


    //cout<<"Enter the population"<<endl;
      cin>>n;
    //cout<<"Enter the number of people that is vaccinated in single day"<<endl;
    cin>>d;
    long double r=0.0,nr=0.0;
    long int arr[n];
    //cout<<"enter the age"<<endl;
    for(i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=9||arr[i]>=80){
        r++;
      }
      else nr++;
    }
    //std::cout << "the patients with risk and non risk are:"<<r<<"::"<<nr<< '\n';
    if(d>n){
      da++;//will always be 1
      }
      else{

            long long int da1=ceil(r/d);
            std::cout << "/* message1 */" <<da1<< '\n';
            long long int da2=ceil(nr/d);
            std::cout << "/* message2 */" <<da2<< '\n';
           da=da1+da2;

        }



      cout<<da<<'\n';
    }
    int main() {
	int t;
	std::cin >> t;
	while(t!=0){
	    vaccine();
	    t--;
	}
	return 0;
}
