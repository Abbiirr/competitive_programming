#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,k,i;
    cin >>n>>k;
    if((n/k)%2==0)
        cout <<"NO";
    else
    {
        cout <<"YES";
    }
    return 0;
}
