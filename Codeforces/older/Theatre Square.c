#include<stdio.h>
    int main()
    {
        long long int n,m,x,a,y,z,q,p;
        scanf("%lld%lld%lld",&n,&m,&a);
        y=n/a;
        if(n%a==0)
            z=y;
        else
            z=y+1;
        q=m/a;
        if(m%a==0)
            p=q;
        else
            p=q+1;
        x=z*p;
        printf("%lld",x);
        return 0;

    }
