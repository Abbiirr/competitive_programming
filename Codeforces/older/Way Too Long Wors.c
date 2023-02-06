#include<stdio.h>
int main()
{
    char a[105];
    int i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%s",&a);
    for(i=0;a[i]!='\0';i++);
    if(i>10)
    {
        printf("%c%d%c\n",a[0],i-2,a[i-1]);
    }
    else
        printf("%s\n",a);
    }

    return 0;
}
