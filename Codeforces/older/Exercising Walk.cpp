#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int a,b,c,d,x,y,x1,x2,y1,y2,t,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        x=x-a+b,y=y-c+d;
        if(x1<=x&&x<=x2&&y1<=y&&y<=y2&&(y1<y2||(c+d)==0)&&(x1<x2||(a+b)==0))
        {
            printf("Yes\n");
        }
        else
            cout <<"NO\n";

    }
    return 0;
}
