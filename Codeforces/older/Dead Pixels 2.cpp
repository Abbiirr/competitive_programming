#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int t,a,b,x,y,k,l,i,j,n;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>x>>y;
        x=x,y=y;
        k=a-x-1;
        l=b-y-1;
        n=max(max(x,k)*b,a*max(y,l));

        cout <<n<<"\n";
    }
    return 0;
}

