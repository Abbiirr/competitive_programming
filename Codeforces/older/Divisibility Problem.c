#include<stdio.h>
int main()
{
    int t,a,b,i,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0)
            printf("0\n");
        else
        {
            n=b-(a%b);
            printf("%d\n",n);
        }
    }
    return 0;
}
