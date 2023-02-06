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
    int t,n,i,j=2,x,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        j=2;
        scanf("%d",&n);
        x=n;
        while(1)
        {
            if(j==n)
            {
                printf("1");
                return 0;
            }
            if(x%j!=0)
            {
                c=0;
                x=n;
                j++;
            }

            x=x/j;
            c++;
            if(x==1)
                break;

        }
        printf("%d\n",c);


    }
    return 0;
}
