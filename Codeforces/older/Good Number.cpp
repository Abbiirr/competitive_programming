#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,a[101],i,j,r,c=0,d;
    cin >>n>>k;
    d=k+1;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        d=k+1;
        int b[10]={0};
        while(a[i]!=0)
        {
            r=a[i]%10;

            if(r<=k&&b[r]!=-1)
            {
                b[r]=-1;
                d--;
            }
            if(d==0)
            {
                c++;
                break;
            }
            a[i]=a[i]/10;
        }
    }
    cout <<c;
    return 0;
}
