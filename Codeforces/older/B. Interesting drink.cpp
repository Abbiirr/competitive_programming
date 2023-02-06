#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin >>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a, a+n);
    /*for(long long int i=1;i<n;i++)
    {
        a[i]+=a[i-1];
    }*/
    long long int q;
    cin >>q;
    for(int i=0;i<q;i++)
    {
        long long int x,y=0;
        cin>>x;
        if(x>=a[n-1])
            y=n;
        else
        {
            for(int j=0;i<n;j++)
            {
                if(x<a[j])
                {
                    y=j;
                    break;
                }
            }
        }


        cout <<y<<endl;
    }



    return 0;
}
