#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t;i++)
    {
        int n;
        cin >>n;
        int a[n], cnt1=0, cnt2=0;
        for(int j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]==1)
                cnt1++;
            else
                cnt2++;
        }
        int sum = cnt1 + cnt2*2;
        if(sum%2!=0)
        {
            cout <<"NO";
        }
        else if(cnt2%2!=0 && cnt1==0)
        {
            cout <<"NO";
        }
        else
            cout <<"YES";
        cout <<endl;

    }


    return 0;
}
