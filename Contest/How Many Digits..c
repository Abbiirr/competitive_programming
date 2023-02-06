#include<stdio.h>
int main()
{
    int i;
    char a[1000000];
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {

    }

    if(i<=3)
    {
        printf("%d",i);
    }
    else if(i>3)
    {
        printf("More than 3 digits");
    }

    return 0;

}
