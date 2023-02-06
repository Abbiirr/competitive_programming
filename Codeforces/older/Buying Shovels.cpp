//https://codeforces.com/contest/1360/problem/D
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,k,i,j,x=0,l=0;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>k;
        x=n;  //if the number is prime ans is n
        l=sqrt(n);
        for(j=1;j<=l;j++)  //finds if the number is prime or not
        {
            if(n%j==0) //if number is compound 
            {
                if(j<=k)  // if j is <=k then ans can be n/j if n/j<n e.g: j=2, n/j=4<n
                    x=min(x,n/j);
                if(n/j<=k)  //// if n/j is <=k then ans can be j if j<n and j<n/j
            {
                x=min(x,j);
            }
            }
            
        }
        cout <<x<<endl;
    }
    return 0;
}