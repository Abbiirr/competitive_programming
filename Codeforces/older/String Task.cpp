#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
int main()
{
    string a,b;
    int i;
    cin >>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!='a'&&a[i]!='A'&&a[i]!='e'&&a[i]!='E'&&a[i]!='I'&&a[i]!='i'&&a[i]!='y'&&a[i]!='Y'&&a[i]!='o'&&a[i]!='O'&&a[i]!='u'&&a[i]!='U')
        {
            cout <<".";
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]-'A'+'a';
            }
            cout <<a[i];
        }
    }
    return 0;
}
