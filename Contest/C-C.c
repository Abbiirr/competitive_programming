#include<stdio.h>
int main()
{
    int x,n,i,j,b=0;
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if(i*j==x)
        {
            b++;
        }
        }

    }
    printf("%d",b);
    return 0;
}
