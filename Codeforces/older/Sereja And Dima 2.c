#include<stdio.h>
int main()
{
    int n,i,s=0,d=0,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=n-1;
    for(i=0;i!=j+1;)
    {
        if(c%2!=0)
        {
            if(a[j]>a[i])
            {
                s=s+a[j];
                j--;
            }
            else
            {
                s=s+a[i];
                i++;
            }
        }
        if(c%2==0)
        {
            if(a[j]>a[i])
            {
                d=d+a[j];
                j--;
            }
            else
            {
                d=d+a[i];
                i++;
            }
        }

        c++;
    }
    printf("%d %d",s,d);
    return 0;
}
