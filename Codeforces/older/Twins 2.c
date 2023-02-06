#include<stdio.h>
int main()
{
    int n,i=0,j,c,d;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[i];
    j=0;
    while(n)
    {

        for(i=0;i<n-1;i++)
        {
            if(a[i]!=0)
            {
                if(c>a[i])
                {
                    c=a[i];
                    d=i;
                }
            }



        }
        a[d]=0;
        b[j]=c;
        j++;
    }
    printf("%d",c);

    return 0;
}
