#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int i,b=0,w=0,j;
    string a;
    for(i=0;i<8;i++)
    {
        cin >>a;
        for(j=0;j<8;j++)
        {
            if(a[j]=='Q')
            {
                w +=9;
            }
            else if(a[j]=='R')
            {
                w +=5;
            }
            else if(a[j]=='B')
            {
                w +=3;
            }
            else if(a[j]=='N')
            {
                w +=3;
            }
            else if(a[j]=='P')
            {
                w +=1;
            }
            else if(a[j]=='q')
            {
                b +=9;
            }
            else if(a[j]=='r')
            {
                b +=5;
            }
            else if(a[j]=='b')
            {
                b +=3;
            }
            else if(a[j]=='n')
            {
                b +=3;
            }
            else if(a[j]=='p')
            {
                b +=1;
            }
        }
    }
    if(w>b)
    {
        cout <<"White";
    }
    else if(b>w)
    {
        cout <<"Black";
    }
    else
        cout <<"Draw";
    return 0;
}
