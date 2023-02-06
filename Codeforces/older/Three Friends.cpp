#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int q,i,x,y,a[3];
    cin >>q;
    for(i=1;i<=q;i++)
    {
        cin >>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        x=a[2]-a[0];
        if(x==0)
        {
            cout <<0<<endl;
        }
        else if(x<=2)
        {
            cout <<0<<endl;
        }
        else
        {
           a[0]++;
           a[2]--;
           y=a[1]-a[0]+a[2]-a[0]+a[2]-a[1];
           cout <<y<<endl;
        }

    }
    return 0;
}
