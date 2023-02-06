#include<stdio.h>
int main()
{
    char a[105],b[105];
    scanf("%s%s",&a,&b);
    strrev(b);
    int c=strcmp(a,b);
    if(c==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
