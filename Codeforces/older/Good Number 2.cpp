#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,i,j,r,c=0,d=0;
    char a[105];
    cin >>n>>k;
    for(i=0;i<n;i++)
    {
        cin >>a;

        int b[10]={0};
        for(j=0;a[j]!='\0';j++)
        {
            b[a[j]-'0']=-1;
        }
        for(j=0;j<=k;j++)
        {
            if(b[j]==0)
            {
                c++;
                break;
            }

        }
        if(c==0)
        {
            d++;
        }
        c=0;
    }
    cout <<d;
    return 0;
}

