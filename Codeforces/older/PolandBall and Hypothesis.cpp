#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define limit       100000
bool prime[limit+1];
void sieve()
{
    long long int i,j;
    memset(prime, true, sizeof(prime));
    
    for(i=2;i<=limit;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=limit;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    int n,m,i;
    cin >>n;
    sieve();
    for(i=1;i<=1000;i++)
    {
        if(prime[(n*i)+1]==false)
            {
                cout <<i;
                return 0;
            }
    }
}