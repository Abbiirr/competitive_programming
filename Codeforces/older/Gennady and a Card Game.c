#include<stdio.h>
int main()
{
    int i;
    char a[3],b[3],c,d;
    scanf("%s",&a);
    for(i=0;i<5;i++)
    {
        scanf(" %c%c",&c,&d);
        if(c==a[0]||d==a[1])
        {
            printf("YES");
            return 0;
        }

    }
    printf("NO");
    return 0;
}
