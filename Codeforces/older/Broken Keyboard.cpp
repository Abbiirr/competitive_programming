#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,j,k=0;
    char c;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        string a;
        int d[26]={0},e[26]={0};
        cin >>a;
        for(j=0;j<a.size();j++)
        {
            for(k=j;k<a.size()&&a[k+1]==a[j];k++)
            {

            }
            if((k-j)%2==0)
                e[a[j]-'a']=1;
            j=k;
        }
        for(j=0;j<26;j++)
        {
            if(e[j])
            {
                c='a'+j;
                cout <<c;
            }
        }
        cout <<endl;
    }
    return 0;
}
