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
        int n,a,b;
        cin >>n>>a>>b;

        if(n%a==0)
            cout <<"Yes";
        else if((n-b)%a==0)
            cout <<"Yes";
        else
            cout <<"No";
        cout <<endl;




    }

    return 0;
}
