#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int n,m,x;
    cin >>n>>m;
    n=pow(2,n);
    x=m%n;
    cout <<x;
    return 0;
}
