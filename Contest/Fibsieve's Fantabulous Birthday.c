#include<stdio.h>
int main()
{
    int n,a,b,i,s,c,r,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        s=ceil(sqrt(a));
        b=s*s-a;
        if(s>b)
        {
            r=s;
            c=b+1;
        }
        else
        {
            r=a-(s-1)*(s-1);
            c=s;
        }
        if(s%2==0)
        {
            x=c;
            c=b;
            b=x;
        }
        printf("Case %d: %d %d",i,c,r);
    }
    return 0;
}
