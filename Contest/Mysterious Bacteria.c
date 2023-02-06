#include<stdio.h>
int powercheck(int a,int b)
{
    int c=0;
    if(a==0)
        return 0;
    while(a!=1)
    {
        if(a%b!=0)
            return 0;
        a=a/b;
        c++;
    }
    return c;
}
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        /*for(j=n;j!=0;j--)
        {
            /*if(powercheck(n,j)==1)
            {
                printf("%d",j);
                break;
            }

        }*/
        printf("%d",powercheck(n,j));
    }
    return 0;
}
