#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int cnt = 1,n;
    cin >>n;
    for(int i=2; i<=n; i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        if(c)
        {
            cnt=cnt*(c+1);
            cout <<cnt<<endl;
        }
    }
    cout <<cnt;
    return 0;
}
