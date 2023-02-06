#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i;
    char c;
    cin >>t;
    cin.ignore();
    for(i=1;i<=t;i++)
    {
        string a,d;
        int b[26]={0},c[26]={0},j,p,q,a1,a2;
        for(j=0;j<26;j++)
        {
            b[j]=0;
            c[j]=0;
        }
        a.clear(),d.clear();
        getline(cin,a);
        p=a.size();
        for(j=0;j<p;j++)
        {
            if(a[j]>='A'&&a[j]<='Z')
            {
                b[a[j]-'A']++;
                a1=a[j]-'A';
            }
            else if(a[j]>='a'&&a[j]<='z')
            {
               b[a[j]-'a']++;
               a1=a[j]-'a';
            }

        }
        getline(cin,d);
        q=d.size();
        for(j=0;j<q;j++)
        {
            if(d[j]>='A'&&d[j]<='Z')
            {
                c[d[j]-'A']++;
                a1=d[j]-'A';
            }
            else if(d[j]>='a'&&d[j]<='z')
            {
                c[d[j]-'a']++;
                a2=d[j]-'a';
            }

        }
        int s=1;
        for(j=0;j<26;j++)
        {
            if(b[j]!=c[j])
            {
                s=0;
                break;
            }
        }
        cout <<"Case "<<i<<": ";
        if(s==1)
            cout <<"Yes"<<endl;
        else
            cout <<"No"<<endl;

    return 0;
}
