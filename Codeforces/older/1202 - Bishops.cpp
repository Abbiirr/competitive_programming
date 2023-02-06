#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int r1,r2,c1,c2,r,c,t,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>r1>>c1>>r2>>c2;
        r=abs(r1-r2);
        c=abs(c1-c2);
        cout <<"Case "<<i<<": ";
        if(r==c)
        {
            cout <<1<<endl;
        }
        else if(r%2==c%2)
        {
            cout <<2<<endl;
        }
        else
        {
            cout <<"impossible"<<endl;
        }
    }


    return 0;
}
