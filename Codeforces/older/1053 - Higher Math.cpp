#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,i,a,b,c,x,y,z;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>c;
        cout << "Case " << i << ": ";
        x=max(a,max(b,c));
        if(a==x)
            a=0;
        else if(b==x)
            b=0;
        else
            c=0;
        a=a*a,b=b*b,c=c*c,x=x*x;
        if(a+b+c==x)
        {
            cout <<"yes\n";
        }
        else
            cout <<"no\n";
    }
    return 0;
}
