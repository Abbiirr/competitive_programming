#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char a[1000000];
    cin >>a;
    if(a[0]!='1')
    {
        cout <<"NO";
        return 0;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='4'&&a[i]!='1')
        {
            cout <<"NO";
            return 0;
        }
        if(a[i]=='4'&&a[i+1]=='4'&&a[i+2]=='4')
        {
            cout <<"NO";
            return 0;
        }

    }
    cout <<"YES";
    return 0;
}
