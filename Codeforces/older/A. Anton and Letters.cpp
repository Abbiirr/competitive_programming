#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    char a[1001],c;
    int count=0;
    bool alp_count[26]={false};
    cin >>c;
    for(int i=0; c!='}';i++)
    {
        cin >>a[i];
        if(a[i]=='}')
            break;
        if(alp_count[a[i]-'a']==false)
        {
            alp_count[a[i]-'a'] = true;
            count++;
        }
        cin>>c;
    }
    cout <<count;
    return 0;
}
