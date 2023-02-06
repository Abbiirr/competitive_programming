#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,k,t,i,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>k;
        x=k*k;
        if(x>n)
        {
            cout <<"NO"<<"\n";
        }
        else if(n%2!=k%2)
        {
            cout <<"NO"<<"\n";
        }
        else
        {
            cout <<"YES"<<"\n";
        }
    }
    return 0;
}

