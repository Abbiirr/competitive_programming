#include<stdio.h>
int main()
{
    int b[26],n,i,j,k,y,t,sum=0;
    char x[1000];
    for(j=0;j<=25;j++)
    {
        b[j]=0;
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&x);
        for(k=0;k!='\0';k++)
        {

        }

        for(t=0;t<=k/2;t++)
        {
            y=x[t]-'a';
            if(y>=0)
            {
                b[y]++;
            }

        }
       for(t=k;t>=k/2;t--)
       {
            y=x[t]-'a';
            if(y>=0)
            {
                b[y]--;
            }
       }
       for(t=0;t<=25;t++)
       {
           sum=sum+b[t];
       }
       if(sum==0)
       {
           printf("Yes");
       }
       else if(sum!=0)
       {
           printf("No");
       }
    }
    return 0;

}

