#include<stdio.h>
int main()
{
    char a[4];
    int n,i,c;
    scanf("%d",&n);
    c=0;
    for(i=1;i<=n;i++)
    {

        scanf("%s",&a);
        if(a[1]=='+')
            c++;
        else if(a[1]=='-')
            c--;
    }

    printf("%d",c);
    return 0;
}
