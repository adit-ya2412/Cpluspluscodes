/*#include <iostream>
#include <cstdio>
using namespace std;

/*int main() {
    // Complete the code.
    int a,n,b;
    cin>>a>>b;
    for(n=a;n<=b;n++)
    {
        if(n<=9)
        {
            
        if(n==1)
        {
            cout<<"one"<<endl;
        }
        else if(n==2)
        {
            cout<<"two"<<endl;
        }
        else if(n==3)
        {
            cout<<"three"<<endl;
        }
        else if(n==4)
        {
            cout<<"four"<<endl;
        }
        else if(n==5)
        {
            cout<<"five"<<endl;
        }
        else if(n==6)
    {
        cout<<"six"<<endl;
    }
       else if(n==7)
    {
        cout<<"seven"<<endl;
    }
       else if(n==8)
    {
        cout<<"eight"<<endl;
    }
       else if(n==9)
    {
        cout<<"nine"<<endl;
    }
        }
        else if(n>9&&(n%2==0))
        {
            cout<<"even"<<endl;
        }
        else if(n>9)
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
    
}*

/*
Add `int max_of_four(int a, int b, int c, int d)` here.

int max_of_four(int x,int y,int z,int k){
    int max,i;
    if(x>y)
    {
        max=x;
     }
     else {max=y;x=y;}
     if(x>z)
     {  
         max=x;
     }else{
         max=z;x=z;

     }
     if(x>k)
     {
         max=x;
     }
     else{
         max=k;
     }
    return max;

}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int s=(*a+*b);
    int d;
    if(*b>*a)
    {
      d=*b-*a;}
    else{
    
    d=*a-*b;
}
    *a=s;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

