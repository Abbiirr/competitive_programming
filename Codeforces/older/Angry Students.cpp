#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,i,j,c=0,x,y1,y2,n,k;
    char a[105];
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        cin >>a;
        c=0,x=0;
        for(j=0;j<n;j++)
        {
            if(a[j]=='A')
            {
                y1=j;
                for(j=j+1;j<n;j++)
                {
                    if(a[j]=='P')
                    {
                        c++;
                    }
                    else if(a[j]=='A')
                    {
                        j--;
                        break;
                    }
                }
                if(c>x)
                    x=c;
                c=0;
            }


        }
        cout <<x<<"\n";
    }
    return 0;
}
