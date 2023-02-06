//https://codeforces.com/contest/456/problem/B
#include<iostream>
#include<cmath>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int powMod(int x,int n)  //calculates (x^n)%5
{
    x=x%5;
    int res=1;
    while(n)
    {
        if((n&1))
        {
            res=(res*x)%5;  //if the bit is 1 then it multiplies the ans to proper of 2
            n--;
        }
        else
        {
            x=(x*x)%5;  //denotes (the power of 2*1)%5
            n>>=1;
        }
        
    }
    return res;
}
int myPow(int x,string s)  //calculates x^n by doing mod at each x*x
{
    int res=1,now=x%5,i;
    for(i=s.size()-1;i>=0;i--)
    {
        res=(res*powMod(now,s[i]-'0'))%5;  // x*((x^n)%5)
        now=powMod(now,10);  //equivalent of (now^10)%5 (maybe)
    }
    return res;
}
int main()
{
    string a;
    cin >>a;
    long long int i,x=0,res;
    res=myPow(1,a)+myPow(2,a)+myPow(3,a)+myPow(4,a);
    res=res%5;
    cout <<res<<endl;
    
    return 0;
}