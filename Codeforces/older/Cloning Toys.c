#include<stdio.h>
int main()
{
    int x,y,i,c=0,n=1;
    scanf("%d%d",&x,&y);
    if(y==0)
    {
        printf("No");
        return 0;
    }
    else if(y-1==0)
    {
        if(x==0)
            printf("Yes\n");
        else
           printf("No");
        return 0;
    }
    if(y-1>x)
    {
        printf("No");
        return 0;
    }

    for(;n!=y;)
    {
        n++;
        c++;
    }
    i=x-c;
    if(i%2==0)
        printf("Yes\n");
    else
        printf("No");

    return 0;
}
