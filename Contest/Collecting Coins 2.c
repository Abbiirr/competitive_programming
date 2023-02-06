#include<stdio.h>
int main()
{
    int a,b,c,n,x=0,t,i,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        x=0;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if(a>b&&a>c)
        {
            x+=a-b;
            x+=a-c;
        }
        else if(b>a&&b>c)
        {
            x+=b-a;
            x+=b-c;
        }
        else
        {
            x+=c-a;
            x+=c-b;
        }

        if(x==n)
            printf("Yes\n");
        else if(x<n)
        {
            y=n-x;
            if(y%3==0)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");

        }

        else
            printf("No\n");

    }
    return 0;
}

