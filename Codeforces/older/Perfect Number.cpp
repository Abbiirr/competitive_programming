//https://codeforces.com/contest/919/problem/B
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)

int main()
{
    int n,x,i,r=0,sum=0,c=0,num=0;
    cin >>n;
    x=n;
    for(i=19;c<=n;i+=9)  //the number is the n*9+10
    {
        r=1,sum=0,num=i;
        while(num)  //sums all the digits
        {
            r=num%10;
            num=num/10;
            sum=sum+r;
        }
        if(sum==10)
        {
            c++;  //keeps count of how many numbers have met the req.
            x=i;  //keeps track of the last number that meets the req.
        }
        if(c==n)
            break;
    }
    cout <<x;
    return 0;
}