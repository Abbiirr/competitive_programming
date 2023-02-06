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
        if(n==1)
            cout <<2;
        else
            cout <<n+1;

        cout <<endl;

    }

    return 0;
}
