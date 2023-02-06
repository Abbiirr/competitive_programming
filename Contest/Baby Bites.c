#include<stdio.h>
int main()
{
    int n,i,j,b=0;
    char a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%c",&a);
        if(a==i)
        {
            b++;
        }
        else if(a[i]=='m')
        {
            b++;
        }


    }
    if(b==n)
        printf("makes sense");
    else
    {
        printf("something is fishy");
    }
    return 0;
}
