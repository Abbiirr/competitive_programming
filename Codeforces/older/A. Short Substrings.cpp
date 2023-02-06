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
        string a;
        cin>>a;
        for(int j=1;a[j]!=0;j++)
        {
            if(a[j-1]==a[j])
            {
                continue;
            }
            cout <<a[j];
        }
        cout <<endl;
    }
    
    return 0;
}
