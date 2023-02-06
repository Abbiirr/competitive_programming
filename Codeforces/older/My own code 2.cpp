#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int x,i;
    string a;
    cin >>a;
    for(i=0;a[i]!=0;i++)
    {
        x=a[i]-48;
        if(i==0)
        {
            if(x==9)
                cout <<9;
            else
            {
                if(x>9-x)
                    cout <<9-x;
                else
                    cout <<x;
            }
        }
        else
        {
            if(x>9-x)
                cout <<9-x;
            else
                cout <<x;
        }
    }
    return 0;
}
