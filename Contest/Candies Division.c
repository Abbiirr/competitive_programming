#include<stdio.h>
int main()
{
    int n,k,a,x,r,c,d,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        scanf("%d%d",&n,&k);
        a=n/k;
        r=n%k;
        d=k/2;
        while(r>d)
        {
            r--;
            c++;
        }
        x=n-c;
        printf("%d\n",x);
    }
    return 0;
}
