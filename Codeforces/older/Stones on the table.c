#include<stdio.h>
int main()
{
    int n,i,c=0;
    char a,b;
    scanf("%d%c",&n,&a);
    for(i=1;i<=n;i++)
    {
        scanf("%c",&b);
        if(a==b)
        {
            c++;
        }
        else if(a!=b)
        {
            a=b;
        }
    }
    printf("%d",c);
    return 0;
}
