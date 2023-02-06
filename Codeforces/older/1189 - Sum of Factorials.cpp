#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int t,i,n,m,j,a[22],b[21],k;
    a[0]=1;
    for(i=1;i<22;i++)
    {
        a[i]=a[i-1]*i;
    }
    cin >>t;
    for(i=1;i<=t;i++)
    {
        j=20;
        cin >>n;
        stack<long long int> st;
        while(j>=0)
        {
            if(a[j]<=n)
            {
                n -=a[j];
                st.push(j);
            }
            j--;
        }
        cout <<"Case "<<i<<": ";
        if(n!=0)
            cout <<"impossible"<<endl;
        else
        {
            while(st.size()!=1)
            {
                cout <<st.top()<<"!"<<"+";
                st.pop();
            }
            cout <<st.top()<<"!"<<endl;
        }

    }
    return 0;
}
