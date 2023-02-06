#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,x;
    cin >>n;
    n=n+1;
    if(n==1)
        cout <<0;
    else if(n%2==0)
        cout <<n/2;
    else
        cout <<n;
    return 0;
}
