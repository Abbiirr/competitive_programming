#include<iostream>
using namespace std;
#include<cstdio>
int a[100000]={0};
int fibonacci(int n)
{
    int i;

    a[0]=0,a[1]=1;
    for(i=2;;i++)
    {
        a[i]=a[i-2]+a[i-1];
        if(a[i]>=n)
        {
            i--;
            break;
        }
    }

    return i;
}
int main()
{
    int n,i,b=0,c=0,d=0,x=0;
    cin >>n;
    x=fibonacci(n);
    //cout <<x<<"\n";
    for(i=x;i>0;i--)
    {
       if(a[i]<=n-2)
       {
           b=a[i];
           break;
       }
    }


    n=n-b;
    for(i=x;i>0;i--)
    {
       if(a[i]<=n-1)
       {
           c=a[i];
           break;
       }
    }

    n=n-c;
    for(i=x;i>0;i--)
    {
       if(a[i]<=n)
       {
           d=a[i];
           break;
       }

    }

    cout <<b<<' '<<c<<' '<<d;
    return 0;
}

