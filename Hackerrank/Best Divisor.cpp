#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long
#define  lld long long double

int main()
{
    ll n, num=1,msum=0;
    vector<int> v;
    stack<int> st;
    v.push_back(1);

    cin>>n;
    st.push(n);
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n)
                st.push(n/i);
        }

    }
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<v.size();i++)
    {
        ll sum=0,x,m=v.at(i);
        while(m)
            {
                sum+=m%10;
                m/=10;
            }
            if(sum>msum)
            {
                msum = sum;
                num = v.at(i);
            }
    }


    cout <<num;


    return 0;
}
