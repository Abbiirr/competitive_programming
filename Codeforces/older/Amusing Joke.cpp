#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
int main()
{
    int i,j,x=0,y=0;
    char a[105],b[105],c[205];
    cin >>a>>b;
    strcat(a,b);
    cin >>c;
    for(i=0;c[i]!=0;i++)
    {
        y=0;
        for(j=0;a[j]!=0;j++)
        {

            if(a[j]!='1'&&a[j]==c[i])
            {
                a[j]='1';
                y++;
                x++;
                break;
            }
        }
        if(y==0)
        {
            cout <<"NO";
            return 0;
        }
    }
    if(x==strlen(a))
    {
        cout <<"YES";
    }
    else
        cout <<"NO";
    return 0;
}
