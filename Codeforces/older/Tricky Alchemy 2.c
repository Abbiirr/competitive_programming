#include<stdio.h>
#include<iostream.h>
#include<math.h>
int main()
{
    long long int a,b,x,y,z,t=0;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&z);

    t=max(2*x+y-a)+max(3*z+y-b);
    if(t<=0)
        printf("0");
    else
        printf("%lld",t);
    return 0;

}

