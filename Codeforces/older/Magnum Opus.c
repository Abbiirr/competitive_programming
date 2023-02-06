#include<stdio.h>
int main()
{
    int a[10],b[10],i,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            b[i]=a[i];
            n=b[i];
        }
        else if(i==1)
        {
            b[i]=a[i];
        }
        else if(i==2)
        {
            b[i]=a[i]/2;
        }
        else if(i==3)
        {
            b[i]=a[i]/7;
        }
        else if(i==4)
        {
            b[i]=a[i]/4;
        }
        if(b[i]<n)
            n=b[i];
    }
    printf("%d",n);
    return 0;
}
