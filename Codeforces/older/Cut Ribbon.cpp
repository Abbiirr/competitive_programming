#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,a[3],x=0,i,c,d,r;
    cin >>n;
    for(i=0;i<3;i++)
    {
        cin >>a[i];
    }
    sort(a,a+3);
    for(i=0;i<3;i++)
    {
        c=n/a[i];
        r=n%a[i];
        d=a[i]+r;
        if(n%a[i]==0)
        {
            x=x+c;
            break;
        }
        else if(d==a[0]||d==a[1]||d==a[2])
        {
            x=x+c;
            break;
        }
        else
        {
            n=n-a[i];
            x++;
        }

    }
    cout <<x;
    return 0;
}
