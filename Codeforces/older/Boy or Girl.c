#include<stdio.h>
int main()
{
    char a[105];
    int i,j=1,c=1;
    scanf("%s",&a);
    for(i=1;a[i]!='\0';i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }

        }
        if(i==j)
            c++;
    }
    if(c%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
