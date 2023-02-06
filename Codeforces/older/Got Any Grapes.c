#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,t;
    scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
    if(a<x)
    {
        printf("NO");
        return 0;
    }
    else
    {
        a=a-x;
        t=a+b;
        if(t<y)
        {
            printf("NO");
            return 0;
        }
        else
        {
            t=t-y+c;
            if(t<z)
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
