#include<stdio.h>
int main()
{
    int n,v1,v2,t1,t2,a,b;
    scanf("%d%d%d%d%d",&n,&v1,&v2,&t1,&t2);
    a=n*v1+t1*2;
    b=n*v2+t2*2;
    if(a<b)
        printf("First");
    else if(b<a)
        printf("Second");
    else
        printf("Friendship");
    return 0;
}
