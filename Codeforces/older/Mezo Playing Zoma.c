#include<stdio.h>
int main()
{
    int n,i,x=1;
    scanf("%d",&n);
    char a[n+2];
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='L'||a[i]=='R')
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
