#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,j,x=0;
    char a[1005],b[1005],c[1005];
    cin >>n;
    for(i=1;i<=n;i++)
    {
        cin >>a>>b>>c;
        x=1;
        for(j=0;a[j]!=0;j++)
        {
            if(c[j]!=a[j]&&c[j]!=b[j])
            {
                x=0;
                break;
            }
        }
        if(x==0)
        {
            cout <<"NO\n";
        }
        else
            cout <<"YES\n";
    }
    return 0;
}
