#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,a,b,c,d,x1,x2,y1,y2,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>a>>b>>c>>d;
        x1=(a-b)*n;
        x2=(a+b)*n;
        y1=c-d;
        y2=c+d;

        if(x1>=y1&&x1<=y2)
        {
            cout <<"YES\n";
        }
        else if(x2>=y1&&x2<=y2)
        {
            cout <<"YES\n";
        }
        else
        {
           cout <<"NO\n";
        }
    }
    return 0;
}
