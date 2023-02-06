#include<stdio.h>
int main()
{
    int a,c,i,j;
    char b;
    scanf("%d",&c);
    for(;;)
    {
        scanf("%d",&a);
        scanf("%c",&b);
        if(a>c)
            c=a;
        printf("%d+",a);
        if(b!='+')
            break;
    }
    return 0;
}
