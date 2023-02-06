#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,j,c,x,k,y,l,m;
   string p,h,a;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>p>>h;
        x=p.length(),c=INT_MIN,y=h.length();
        sort(p.begin(),p.end());
        for(j=0;j<y-x+1;j++)
        {
            a=h.substr(j,x);
            sort(a.begin(),a.end());
            if(p==a)
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            cout <<"YES"<<endl;
        }
        else
            cout <<"NO"<<endl;
    }
}
