#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,t=0,i,c=0;
    cin >>n;
    for(i=1;i<=n;i++)
    {
        cin >>k;
        t=t+k;
        if(t==-1)
        {
            c++;
            t=0;
        }
    }
    cout <<c;
    return 0;
}
