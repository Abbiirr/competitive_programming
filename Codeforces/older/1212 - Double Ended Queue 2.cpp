#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,m,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m;
        deque<int> q;
        string a;
        int j,c=0,x;
        cout <<"Case "<<i<<":"<<endl;
        for(j=1;j<=m;j++)
        {
            cin >>a;
            if(a=="pushLeft"|| a=="pushRight")
            {
                cin >>x;
                if(q.size()==n)
                {
                    cout <<"The queue is full";
                }
                else if(a=="pushLeft")
                {
                    cout <<"Pushed in left: "<<x;
                    q.push_front(x);
                }
                else if(a=="pushRight")
                {
                    cout <<"Pushed in right: "<<x;
                    q.push_back(x);
                }
            }
            else if(a=="popLeft"||a=="popRight")
            {
                if(q.size()==0)
                    cout <<"The queue is empty";
                else if(a=="popLeft")
                {
                    cout <<"Popped from left: "<<q.front();
                    q.pop_front();
                }
                else if(a=="popRight")
                {
                    cout <<"Popped from right: "<<q.back();
                    q.pop_back();
                }
            }
            cout <<endl;
        }

    }
    return 0;
}

