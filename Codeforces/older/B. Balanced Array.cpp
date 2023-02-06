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
        if(n%4==0)
        {
            cout <<"YES"<<endl;
            int evsum=0,odsum=0,odd=1,even=2;
            for(int j=0;j<n/2;j++,even+=2)
            {
                cout <<even<<" ";
                evsum+=even;
            }

            for(int j=0;j<((n/2)-1);j++,odd+=2)
            {
                cout <<odd<<" ";
                odsum+= odd;
            }
            cout <<evsum-odsum<<endl;
        }
            
        else
            cout <<"NO"<<endl;
        
    }
    
    return 0;
}
