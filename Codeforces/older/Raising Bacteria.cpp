#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
    int x,n=0;
    cin >>x;
    while(x)
    {
        if(x&1)
        {
            n++;

        }
        x>>=1;
    }
    cout <<n;
    return 0;
}
