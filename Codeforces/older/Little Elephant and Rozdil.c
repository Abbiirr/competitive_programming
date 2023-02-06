#include<stdio.h>
int main()
{
    int n,a[100000],i=0,x,y,m;
    scanf("%d%d",&n,&a[i]);
    x=a[0];
    y=0;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<x)
        {
            x=a[i];
            y=i;
        }

        else if(a[i]==x)
        {
            m=x;
        }
    }
    if(m==x)
        printf("Still Rozdil");
    else
        printf("%d",y+1);
    return 0;
}
