#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()

{
    char a[110];
    cin>>a;

    int i,c=0,d=0,l=0;

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(c==0)
        {

        if(a[i]=='V' && a[i+1]=='V' && a[i+2]!='K')
        {

            a[i+1]='K';
            c++;
        }


        if(a[i]=='K' && a[i+1]=='K' && a[i-1]!='V')
        {
            a[i]='V';
            c++;
        }

        }

        if(c>0)
        {
            break;
        }
    }



    i=0;


    for(i=0;i<l;i++)
    {
        if(a[i]=='V' && a[i+1]=='K')
        {
           d++;
        }

    }



    cout<<d;





    return 0;
}

