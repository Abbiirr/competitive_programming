#include<stdio.h>
int main()
{
    int n,d,i;
    scanf("%d",&n);
    char a[n+5],b[2];
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        b[0]=a[i];
        b[1]=a[i+1];
        d=strcmp(a,b);
        printf("%d\n",d);
    }
    return 0;
}
