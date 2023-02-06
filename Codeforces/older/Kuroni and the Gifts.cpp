#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,n,i,j,k,temp;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n],b[n];
        for(j=0;j<n;j++)
        {
            cin >>a[j];
        }
        for(j=0;j<n;j++)
        {
            cin >>b[j];
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(b[j]>b[k])
                {
                    temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            cout <<a[j]<<' ';
        }
        cout <<"\n";
        for(j=0;j<n;j++)
        {
            cout <<b[j]<<' ';
        }
        cout <<"\n";
    }
}
