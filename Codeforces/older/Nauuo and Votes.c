#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y+z)
        printf("+");
    else if(y>x+z)
        printf("-");
    else if(x==y&&z==0)
        printf("0");
    else
        printf("?");
    return 0;
}
