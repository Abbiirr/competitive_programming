//https://codeforces.com/contest/1332/problem/B
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,n,prime[11]={2,3,5,7,11,13,17,19,23,29,31};  //stored all the prime below sqrt(1000)
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n],j,c[n],k,l,b[11]={0},h=1;  //b array to keep order  of used primes . h counts how many primes used
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            for(k=0;k<11;k++)
            {
                if(a[j]%prime[k]==0)
                {
                    if(b[k]==0)
                    {
                        b[k]=h++;
                    }
                    c[j]=b[k];
                    break;
                }
            }
        }
        cout <<h-1<<endl;
        for(j=0;j<n;j++)
        {
            cout <<c[j]<<' ';
        }
        cout <<endl;
    }
    return 0;
}