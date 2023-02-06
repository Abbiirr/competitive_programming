#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,c=0,x=0,i,j;
    char a[105];
    cin >>t;
    for(i=1;i<=t;i++)
    {
        x=0;
        c=0;
        cin >>a;
        for(j=0;a[j]!='\0';j++)
        {

            if(c==0)
            {
                {
                    if(a[j]=='1'&&a[j+1]=='0')
                    {
                        if(a[j+2]!='\0')
                            c++;
                    }

                }

            }
            else if(c==1)
            {
                if(a[j]=='1')
                {
                    c++;
                }
                else
                    x++;
            }
        }
        if(c>1)
            cout <<x<<"\n";
        else
            cout <<0<<"\n";
    }
    return 0;
}
