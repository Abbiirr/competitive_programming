#include<stdio.h>
int main()
{
    int i,current,count;
    char a[100];

    scanf("%s", &a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==current)
        {
            count++;
        }
        else
        {
            current=a[i];
            count=1;
        }
        if(count==7)
        {
            break;
        }
    }
    if(count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
