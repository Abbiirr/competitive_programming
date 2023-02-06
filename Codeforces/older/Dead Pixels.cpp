#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int t,a,b,x,y,k,l,i,j,n1=0,n2=0;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>x>>y;
        x=x+1,y=y+1;
        if(x>a/2)
        {
            k=x;
        }
        else
        {
            k=a-x;
        }
        if(y>b/2)
        {
            l=y;
        }
        else
        {
            l=b-y;
        }
        n1=k*b;
        n2=a*l;
        if(n1>=n2)
            cout <<n1<<' '<<"n1\n";
        else
            cout <<n2<<' '<<"n2\n";
    }
    return 0;
}
