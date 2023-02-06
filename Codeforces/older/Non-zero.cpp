#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,n,i,j,x,y,z,sum,c;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n];
        c=0,sum=0;
        x=0;
        for(j=0;j<n;j++)
        {
            cin >>a[j];

            if(a[j]==0)
            {
                a[j]=1;
                c++;
            }
            if(a[j]>x)
            {
                x=j;
            }
            sum=sum+a[j];
        }
        while(sum==0)
        {
            c++;
            sum++;
        }
        cout <<c<<"\n";
    }
    return 0;
}
