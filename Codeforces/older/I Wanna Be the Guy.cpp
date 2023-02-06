#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,p,q,i,j,k,c=0;
    cin >>n>>p;
    int a[200];
    for(i=0;i<p;i++)
    {
        cin >>a[i];
    }
    cin >>q;
    int b[q];
    for(i=p;i<p+q;i++)
    {
        cin >>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<p+q;j++)
        {
            if(a[j]==i)
            {
                c++;
                break;
            }
            if(c==n)
            {
                cout << "I become the guy.";
                return 0;
            }
        }
    }
    /*for(i=c+1;i<=n;i++)
    {
        for(j=0;j<q;j++)
        {
            if(b[j]==i)
            {
                c++;
                break;
            }
            if(c==n)
            {
                cout << "I become the guy.";
                return 0;
            }
        }
    }*/
    if(c==n)
        cout <<"I become the guy.";
    else
        cout <<"Oh, my keyboard!";
    return 0;
}
