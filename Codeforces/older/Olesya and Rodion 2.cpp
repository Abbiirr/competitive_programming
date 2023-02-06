#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,t,i,x=1,y=9;
    cin >>n>>t;
    if(t==10)
    {
        if(n==1)
        {
            cout <<-1;
            return 0;
        }
        else
        {
            for(i=1;i<n;i++)
            {
                cout <<1;
            }
            cout <<0;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            cout <<t;
        }
    }



    return 0;
}

