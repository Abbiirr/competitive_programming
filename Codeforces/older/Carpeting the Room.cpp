#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,k,n1;
    cin >>n>>k>>n1;
    n=n*n,n1=n1*n1;
    if(k*n1>=n)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
