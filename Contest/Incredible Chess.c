#include<stdio.h>
int main()
{
    int t,n,i,j,c;
    scanf("%d",&t);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        j=0;
        c=1;
        while(j<n)
        {
            if(c==1)
            {
                if(b[j]!=(a[j]+1))
                a[j]++;
                else
                    j++;
                c=2;
            }
            else if(c==2)
            {
                if(a[j]!=(b[j]+1))
                    b[j]++;
                else
                    j++;
                c=1;
            }
        }
        if(c==1)
            printf("black wins");
        else if(c==2)
            printf("white wins");
    }
    return 0;
}
