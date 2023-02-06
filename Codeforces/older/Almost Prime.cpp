//https://codeforces.com/contest/26/problem/A
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int prime[1000]={0};
int mark[4005]={0};
void prime_store()  //a function to store the prime number in prime[];
{                   //also to to mark non-prime;
    int i,j,l=0;
    for(i=2;i<=4000;i++)
    {
        if(!(mark[i]))
        {
            prime[l++]=i;
            for(j=i*i;j<=4000;j+=i)
            {
                mark[j]=-1;
            }
        }
    }
}
int almost_prime(int n)  //counts how many prime divisor n has. If n has more/less than 2 p divisors returns 0;
{
    int i,c=0;
    for(i=0;prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            c++;
        }
        if(c>2)
            return 0;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n,x=0,i,y=0;
    cin >>n;
    prime_store();
    for(i=4;i<=n;i++)
    {
        if(y=almost_prime(i))
            x++;
    }
    cout <<x;
    
    
    return 0;
}