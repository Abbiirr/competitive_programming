#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int w,n,m,i,j,t;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>w;
        cout <<"Case "<<i<<": ";
        if(w%2!=0)
        {
            cout <<"Impossible"<<endl;
            continue;
        }
        n=w/2;
        m=2;
        while(n%2==0)
        {
            n=n/2;
            m=m*2;


        }

        cout <<n<<' '<<m<<endl;
    }
    return 0;
}
