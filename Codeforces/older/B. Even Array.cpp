#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>

int main()
{
    int t;
    cin >>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >>n;

        int a[n],even_bad =0, odd_bad=0;
        bool isGood[n] = {false};
        for(int j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]%2!=j%2)
            {
                //cout <<a[j]<<" bad   ";
                if(a[j]%2!=0)
                    odd_bad++;
                else
                    even_bad++;
            }
        }
        if(odd_bad==even_bad)
            cout <<odd_bad<<endl;
        else
            cout<<-1<<endl;


    }

    return 0;
}
