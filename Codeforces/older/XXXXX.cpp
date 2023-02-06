//https://codeforces.com/problemset/problem/1364/A

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)

int main()
{
    int t,n,i,j,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>x;
        int a,c=0,l=-1,r=-1,sum=0;
        for(j=0,sum=0;j<n;j++)
        {
            cin >>a;
            if(a%x!=0)
            {
                if(l==-1) l=j; //keeps track of the first int not divisible by x
                r=j;  // the last int not divisible by x
            }
            sum=sum+a;
        }
        if(sum%x!=0)
        {
            cout <<n;
        }
        else if(l==-1)
        {cout <<-1;}
        else
        {
            cout <<n-min(l+1,n-r); //finds out the nearest integer which isn't divisible by x, then substracts until that position
            
        }
        cout <<endl;
    }
    return 0;
}