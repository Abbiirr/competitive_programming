#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int s,n,i,j,t,f;
    cin >>s>>n;
    int x[n],y[n],z[n];
    for(i=0;i<n;i++)
    {
        cin >>x[i]>>y[i];
        z[i]=x[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
                f=y[i];
                y[i]=y[j];
                y[j]=f;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       if(s>x[i])
        {
            s=s+y[i];
        }
        else
        {
           cout <<"NO";
            return 0;
        }
    }

    cout <<"YES";
    return 0;

}
