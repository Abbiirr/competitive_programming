#include<stdio.h>
long long int fact( int a)
{
     int n;
    if(a<=0)
        return 1;
    return a*fact(a-1);
}
int main()
{

    int a,b;
     long long int x,y,c;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
            c=fact(b);
            printf("%lld",c);
    }
    else
    {
            c=fact(a);
            printf("%lld",c);
    }

    return 0;
}

