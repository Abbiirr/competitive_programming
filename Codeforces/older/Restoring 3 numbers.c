#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
            x=a-b;
            y=a-c;
            z=a-d;
            }
            else
            {
                x=d-a;
                y=d-b;
                z=d-c;
            }
        }
        else if (c>d)
        {
            x=c-a;
            y=c-b;
            z=c-d;
        }
        else
            {
                x=d-a;
                y=d-b;
                z=d-c;
            }



    }
    else if(b>c)
    {
        if(b>d)
        {
            x=b-a;
            y=b-d;
            z=b-c;
        }
        else
        {
            x=d-a;
            y=d-b;
            z=d-c;
        }
    }
    else if(c>d)
    {
        x=c-a;
        y=c-b;
        z=c-d;
    }
    else
    {
        x=d-a;
        y=d-b;
        z=d-c;
    }

    printf("%d %d %d",x,y,z);
    return 0;

}
