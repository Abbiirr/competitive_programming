#include<iostream>
using namespace std;
#include<cstdio>
#include <iomanip>
int main()
{
    long double d,L,v1,v2;
    long double t,v,x;
    cin >>d>>L>>v1>>v2;
    v=v1+v2;
    x=L-d;
    t=x/v;
    cout <<setprecision(30)<<t;
    return 0;
}
