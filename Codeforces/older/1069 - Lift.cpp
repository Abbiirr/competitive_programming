#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,i,a,b,n;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b;
        n=abs(a-b)*4+5+6;
        n=n+a*4+5+3;
        cout <<"Case "<<i<<": "<<n<<"\n";
    }
    return 0;
}
