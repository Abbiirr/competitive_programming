#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int t,i,n,x,odd,even,j,y,c;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>x;
        long long int a[n];
        even=0,odd=0,c=0;
        for(j=1;j<=n;j++)
        {
            cin >>a[j];
            if(a[j]%2==0)
            {
                even++;
            }
            else
                odd++;
        }
        if(x%2!=0&&x==odd)
        {
            cout <<"YES";
        }
        else
        {
            for(j=1;j<=odd&&j<=x;j+=2)
            {
                y=x-j;
                if(y<=even)
                    c=1;
            }

            if(c==1)

                cout <<"YES";

            else
                cout <<"NO";
        }

        cout <<endl;
    }
    return 0;
}
