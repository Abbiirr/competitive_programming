#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int a,b,t,n1,n2,n,i,j,x=12;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b;
        n1=0,n2=0;
        a=a-1;
        n1=(a/3)*2;
        if(a%3==2)
            n1++;
        n2=(b/3)*2;
        if(b%3==2)
            n2++;
        n=n2-n1;
        cout <<"Case "<<i<<": "<<n<<endl;
    }
    return 0;
}
