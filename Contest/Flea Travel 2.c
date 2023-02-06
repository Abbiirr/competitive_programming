#include<stdio.h>
int poweroftwocheck(int a)
{
    if(a==0)
        return 0;
    while(a!=1)
    {
        if(a%2!=0)
            return 0;
        a=a/2;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=2)
    {
        printf("YES");
        return 0;
    }
    else if(poweroftwocheck(n)==1)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;

}
