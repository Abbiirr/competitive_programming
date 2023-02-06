#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long

//the logic is to go from 2 and multiply all primes until we hit n
//complexity should be O(primes till n) (sorry bad with CP :'))
ull gcd(ull  a, ull b)    //gcd is when b divides a completely
{
    while(b!=0)
    {
        ull t=b;
        b = a%b;    //b will be 0 if b divides a
        a=t;
    }
    return a;
}

int main()
{
    int q;
    cin >>q;
    for(int i=0; i<q; i++)
    {
        ull n;
        cin >>n;
        ll prime=3, prod = 2,count=1;   //count=1 because we are starting from 2
        if(n<2)
            count=0;
        for(;prime*prod<=n;prime+=2)
        {
            if(gcd(prod,prime)==1)  //gcd 1 means that number is prime, since all primes less than it is within prod
            {
                prod*=prime;
                count++;
            }
        }
        cout <<count<<endl;
    }


    return 0;
}
