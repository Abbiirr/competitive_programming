#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    long long int t,n,i,j,x,m,k;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        m=n;
        for(j=2;j<30;j++)
        {
           m=pow(2,j)-1;
           if(n%m==0)
           {
               k=j;
               break;
           }

        }
        x=n/m;
        cout <<x<<"\n";
    }
    return 0;
}
