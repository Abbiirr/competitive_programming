#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,x,y,z,t=0;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&z);

    x=x*2,z=z*3;
    if(a==0)
    {
       t=t+x+y;
    }
    else
        a=a-x-y;
    if(b==0)
    {
        t=t+z+y;
    }
    else
        b=b-z-y;

    if(a<0)
    {
        t=t-a;
    }
    if(b<0)
    {
        t=t-b;
    }
    printf("%lld",t);
    return 0;

}
