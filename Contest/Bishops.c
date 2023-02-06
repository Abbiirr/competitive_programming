#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,x=1,a,b,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        printf("Case %d: ",i);
        if(c1%2==0)
    {
        if(r1%2==0)
        {
          a=1;
        }
        else
        {
            a=2;
        }

    }
    else
    {
        if(r1%2==0)
        {
            a=2;
        }
        else
        {
            a=1;
        }
    }
    if(c2%2==0)
    {
        if(r2%2==0)
        {
          b=1;
        }
        else
        {
            b=2;
        }

    }
    else
    {
        if(r2%2==0)
        {
            b=2;
        }
        else
        {
            b=1;
        }
    }
    if(a!=b)
    {
        printf("impossible\n");
    }
    else
    {
        if(r1!=c1)
        {
            x++;
        }
        else if(r2!=c2)
        {
            x++;
        }
        printf("%d\n",x);
    }
    }



}
