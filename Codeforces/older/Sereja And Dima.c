#include<stdio.h>
int main()
{
    int n,s=0,d=0,c=1,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=n;
    for(i=0;c<=x;c++)
    {
        if(c%2!=0)
        {
             if(a[i]>a[n-1])
            {

                s=s+a[i];
                i++;
            }
            else
            {

                s=s+a[n-1];
                n--;
            }
        }
        else
        {
            if(a[i]>a[n-1])
            {

                s=d+a[i];
                i++;
            }
            else
            {

                d=d+a[n-1];
                n--;
            }
        }


    }
    printf("%d %d",s,d);
    return 0;
}
