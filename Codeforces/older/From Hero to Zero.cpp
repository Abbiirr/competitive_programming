#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,k,i,j,t;
    cin >>t;
    for(j=1;j<=t;j++)
    {
        cin >>n>>k;

        for(i=0;n!=0;i++)
        {
            if(n%k!=0)
            {
                i +=n%k-1;
                n=n-n%k;
            }
            else
            {
                n=n/k;
            }
        }
        cout <<i<<endl;
    }
    return 0;
}
