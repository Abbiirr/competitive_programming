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
        char a[101];
        cin>>a;
        cout <<a[0];
        for(int j=1,c=1;a[j]!=0;j++,c++)
        {
            if(a[j-1]==a[j] && c%2==0 && a[j+1]!=0)
            {
                continue;
            }
            cout <<a[j];
        }
        cout <<endl;
    }
    
    return 0;
}
