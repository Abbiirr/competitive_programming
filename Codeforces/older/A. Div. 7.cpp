#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t;i++)
    {
        int x;
        string s;
        cin >>s;
        x = atoi(s.c_str());
        if(x%7==0)
        {
            cout <<x<<endl;
            continue;
        }
        string ss = s;
        for(int i=s.size()-1; i>-1;i--)
        {
            s = ss;
            for(int j=0;j<10;j++)
            {
                s[i] = (char)(j+'0');
                //cout <<s[i]<<" ";
                x= atoi(s.c_str());
                if(x%7==0)
                {
                    i=-1;
                    break;
                }
            }
        }
        cout <<x<<endl;

    }


    return 0;
}
