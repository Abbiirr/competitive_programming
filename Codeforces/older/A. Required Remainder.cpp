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
        int n,x,y;
        cin >>x>>y>>n;

        if(n%x==y)
        {
            cout <<n;
        }
        else 
        {
            int k = n - n%x + y, k1= k-x;
            if(k<0)
                cout <<0;
            else if(k>n)
            {
                cout <<k1;
            }
            else 
                cout <<k;
        }
        cout <<endl;
        
        
    }
    
    return 0;
}
