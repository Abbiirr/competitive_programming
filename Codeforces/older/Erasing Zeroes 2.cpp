#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
int main()
{
    int t,c=0,x=0,i,j,l=-1,r=-1;
    char a[105];
    cin >>t;
    for(i=1;i<=t;i++)
    {
        x=0;
        c=0;
        l=-1,r=-1;
        cin >>a;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='1')
            {
                l=j;
                break;
            }
            /*if(c==0)
            {
                if(a[j]=='1'&&a[j+1]=='0')
                {
                    l=j;
                    c++;
                }
            }
            else if(c==1)
            {
                if(a[j]=='1')
                {
                    c++;
                    r=j;
                }

            }*/
        }
        for(j=strlen(a)-1;j>=0;j--)
        {
            if(a[j]=='1')
            {
                r=j;
                break;
            }
        }
        if(l==-1||r==-1)
            cout <<0<<"\n";
        else
        {
            for(j=l;j<=r;j++)
            {
                if(a[j]=='0')
                    x++;
            }
            cout <<x<<"\n";
        }



    }
    return 0;
}
