#include<stdio.h>
int main()
{
    int a[10],b[10]={0},n,c,d,j=0,i;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=0;
       scanf("%d",&c);
       while(j<9)
       {
           if(a[j]==c)
           {
               b[j]=1;
               break;
           }
           j++;
       }
    }
    if(b[0]==1&&b[1]==1&&b[2]==1)
    {
        printf("Yes");
    }
    else if(b[3]==1&&b[4]==1&&b[5]==1)
    {
        printf("Yes");
    }
    else if(b[6]==1&&b[7]==1&&b[8]==1)
    {
        printf("Yes");
    }
    else if(b[0]==1&&b[3]==1&&b[6]==1)
    {
        printf("Yes");
    }
    else if(b[1]==1&&b[4]==1&&b[7]==1)
    {
        printf("Yes");
    }
    else if(b[2]==1&&b[5]==1&&b[8]==1)
    {
        printf("Yes");
    }
    else if(b[0]==1&&b[4]==1&&b[8]==1)
    {
        printf("Yes");
    }
    else if(b[6]==1&&b[4]==1&&b[2]==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
