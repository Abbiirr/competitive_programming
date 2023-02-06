#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int a,b,s,x;
    cin >>a>>b>>s;
    a=abs(a),b=abs(b);
    x=a+b;
    if(x>s)
    {
        cout <<"NO";
    }
    else
    {
        x=s-x;
        if(x%2==0)
            cout <<"YES";
        else
            cout <<"NO";
    }
    return 0;
}
