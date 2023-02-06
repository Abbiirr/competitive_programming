#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,j,c=0;
    cin >>n;
    char a[n][5];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        for(j=0;j<5;j++)
        {
            if(c==0)
            {
                if(a[i][j]=='O'&&a[i][j+1]=='O')
                {
                    a[i][j]='+';
                    a[i][j+1]='+';
                    c=1;

                }
            }

        }
    }
    if(c==1)
    {
        cout <<"YES\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cout <<a[i][j];
            }
            cout <<"\n";
        }
    }
    else
        cout <<"NO\n";

    return 0;
}
