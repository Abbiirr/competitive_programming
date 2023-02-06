#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,i,c=0;
    char a;
    cin >>n>>k;
    for(i=1;i<=n*k;i++)
    {
        cin >>a;
        if(a=='C'||a=='M'||a=='Y')
        {
            c=1;
        }
    }
    if(c==0)
    cout <<"#Black&White";
    else if(c==1)
        cout <<"#Color";
    return 0;
}
