#include<stdio.h>
int main()
{
    int a[105],n,b=0,c=0,i,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
             b++;
             x=i;
        }

        else
        {
            c++;
            y=i;
        }

    }
    if(b==1)
        printf("%d",x);
    else if(c==1)
        printf("%d",y);
    return 0;
}
