#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int a,b,c,x;
    cin >>a>>b>>c;
    x=b-a;
    if(c==0&&x!=0)
        cout <<"NO";
    else if(x<0&&c>0)
        cout <<"NO";
    else if(x>0&&c<0)
        cout <<"NO";
    else if(x==0)
    {
        cout <<"YES";
    }
    else if(x%c==0)
    {
        cout <<"YES";
    }
    else
        cout <<"NO";
    return 0;
}
