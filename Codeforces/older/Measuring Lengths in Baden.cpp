#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int n,a,b,x;
    cin >>n;

    if(n%3>1)
    {
        b=(n/3)+1;
    }
    else
        b=n/3;
    a=b/12;
    b=b%12;
    cout <<a<<' '<<b;
    return 0;
}
