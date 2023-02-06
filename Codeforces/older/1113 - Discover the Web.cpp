#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int i,t;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cout <<"Case "<<i<<":"<<endl;
        stack <string> stback, stforward;
        stback.push("http://www.lightoj.com/");
        while(1)
        {

            string arr, now;
            cin >>arr;
            if(arr=="VISIT")
            {
                cin >>now;
                stback.push(now);
                cout <<stback.top()<<endl;
                while(!stforward.empty()) stforward.pop();
            }
            else if(arr=="BACK")
            {
                if(stback.size()<=1)
                {
                    cout <<"Ignored"<<endl;
                }
                else
                {
                    stforward.push(stback.top());
                    stback.pop();
                    cout <<stback.top()<<endl;
                }
            }
            else if(arr=="FORWARD")
            {
                if(stforward.empty())
                {
                    cout <<"Ignored"<<endl;
                }
                else
                {
                    stback.push(stforward.top());
                    stforward.pop();
                    cout <<stback.top()<<endl;

                }
            }
            else
                break;

        }

    }

    return 0;
}
