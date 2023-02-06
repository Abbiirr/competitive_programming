#include<stdio.h>
int main()
{
    int b=0,n,i,j,c;
    scanf("%d",&n);
    int a;

    for(i=0;i<n;i++)
    {

        scanf("%d",&a);
        for(j=2;j<=n;j++)
        {
            if(a%j==0)
            {
                b++;
            }
        }
        printf("%d ",b);
        if(b==3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        b=0;
    }
    return 0;
}
