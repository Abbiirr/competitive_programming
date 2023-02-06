#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,j,i,power=1,c;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int b[10000]={-1};
        power=1;
        for(j=0;n>0;)
        {
            if(n%10>0)
            {
                b[j]=(n%10)*power;
                j++;
            }
            n /=10;
            power *=10;
        }
        c=j;
        cout <<j<<endl;
        for(j=0;j<=c;j++)
        {
            if(b[j]==0)
                continue;
            cout <<b[j]<< ' ';
        }
        cout <<endl;
    }
    return 0;
}
