#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
vector<int>nums;
int divs [1009];
int NOD(int n)
{
    int div=1,c=0,i;
    for(i=2;i<=n;i++)
    {
        c=0;
        while(n%i==0)
        {
            n /=i;
            c++;
        }
        if(c)
        {
            div =div*(c+1);
        }

    }
    return div;
}
int main()
{
    int t,n,i,j;
    cin >>t;
        for(i=1;i<=1001;i++)
        {
            divs[i]=NOD(i);
        }
        for(i=1;i<=35;i++)
        {
            for(j=1000;j>0;j--)
            {
                if(divs[j]==i)
                    nums.push_back(j);
            }
        }
        for(i=1;i<=t;i++)
        {
            cin >>n;
            cout <<"Case "<<i<<": "<<nums[n-1]<<endl;
        }

    return 0;
}
