#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,t,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>k;
        if(n%2==0)
        {
            if(k%2!=0)
            {
                cout <<"NO"<<"\n";
            }
            else if(k<=n)
                cout <<"YES"<<"\n";
            else
                cout <<"NO"<<"\n";

        }
        else
        {
            if(k%2==0)
            {
                cout <<"NO"<<"\n";
            }
            else if(k<=n)
                cout <<"YES"<<"\n";
            else
                cout <<"NO"<<"\n";

        }
    }

    return 0;
}
