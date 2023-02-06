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
        stack<int> left,right;
        string a;
        int j,c=0,x;
        cout <<"Case "<<i<<":"<<endl;
        for(j=1;j<=m;j++)
        {
            cin>>a;
            if(a=="pushLeft")
            {
                if(c<n)
                {
                    cin >>x;
                    left.push(x);
                    cout <<"Pushed in left: "<<x<<endl;
                    c++;
                }
                else
                {
                    cin >>x;
                    cout <<"The queue is full"<<endl;
                }

            }
            else if(a=="pushRight")
            {
                if(c<n)
                {
                    cin >>x;
                    right.push(x);
                    cout <<"Pushed in right: "<<x<<endl;
                    c++;
                }
                else
                {
                    cin >>x;
                    cout <<"The queue is full"<<endl;
                }

            }
            else if(a=="popLeft")
            {
                if(c>0)
                {
                    cout <<"Popped from left: "<<left.top()<<endl;
                    left.pop();
                    c--;
                }
                else
                {
                    cout <<"The queue is empty"<<endl;
                }

            }
            else if(a=="popRight")
            {
                if(c>0)
                {
                    cout <<"Popped from right: "<<right.top()<<endl;
                    right.pop();
                    c--;
                }
                else
                {
                    cout <<"The queue is empty"<<endl;
                }

            }
        }
    }
    return 0;
}
