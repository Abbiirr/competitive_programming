#include<iostream>
using namespace std;
#include<cstdio>
#include<algorithm>

int main()
{
    int x1,x2,x3,d,t;
    cin >>x1>>x2>>x3;
    if(x1>x2)
    {
        d=max(x1,x3)-min(x2,x3);
    }
    else
    {
        d=max(x2,x3)-min(x1,x3);
    }

    cout <<d;
    return 0;

}

