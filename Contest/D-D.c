#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
           z=a;
           x=b;
           y=c;
        }
        else
        {
            z=c;
            x=a;
            y=b;
        }

    }
    else
    {
        if(b>c)
        {
            z=b;
            x=a;
            y=c;
        }
        else
        {
            z=c;
            x=a;
            y=b;
        }
    }
    a=x*x,b=y*y,c=z*z;
    if(a+b==c)
    {
        printf("right");
    }
    else
    {
        printf("wrong");
    }
    return 0;
}
