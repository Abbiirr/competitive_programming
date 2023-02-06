#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int q,n,i,j,k,x,y=0;
    cin >>q;
    for(i=1;i<=q;i++)
    {
        y=0;
        cin >>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin >>a[j];
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                x=a[j]-a[k];
                if(x==-1||x==1)
                {
                    y=1;
                    break;
                }
            }
            if(y==1)
            {
                cout <<2<<"\n";
                break;
            }
        }
        if(y!=1)
            cout <<1<<"\n";

    }
    return 0;
}
