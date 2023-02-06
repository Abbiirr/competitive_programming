#include<stdio.h>
int main()
{
     int t,i,n,x,j;
     long long int s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("-1");
        }
        else
        {
            printf("23");
            for(j=2;j<n;j++)
            {
                printf("3");
            }
            /*while(s%3==0)
            {
                s=s+2;
            }*/
        }
        printf("\n");
    }
    return 0;
}
