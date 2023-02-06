#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,i,t,n,sum,j,e=0,o=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        e=0,o=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
            if(e==0)
            {
                if(a%2==0)
                    e=1;
            }
            if(o==0)
            {
                if(a%2!=0)
                    o=1;
            }
        }
        if(sum%2==0)
        {
            if(e==1&&o==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("YES\n");

    }
    return 0;
}
