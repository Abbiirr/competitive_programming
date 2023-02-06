#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,p,q,x=2,j,t,f;
    cin >>n;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                f=b[i];
                b[i]=b[j];
                b[j]=f;
            }
            if(b[i]>b[j])
            {
                cout << "Happy Alex";
                return 0;
            }
        }
    }
    /*for(i=1;i<n;i++)
    {
        if(b[i-1]>b[i])
            x=1;
    }*/
    cout << "Poor Alex";
    return 0;
}
