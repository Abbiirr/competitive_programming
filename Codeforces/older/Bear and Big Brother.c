#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
            break;
    }
    printf("%d",i);
    return 0;
}