#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int a,b,i,x=0;
    cin >>a>>b;
    for(;;)
    {
        if(a==0||b==0)
        {
            break;
        }
        if(a==1&&b==1)
        {
            break;
        }
        if(a>b)
        {
            a=a-2;
            b++;
        }
        else
        {
            b=b-2;
            a++;
        }
        x++;

    }
    cout <<x;
    return 0;
}
