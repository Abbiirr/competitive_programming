#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    c=n;
    char a[n+2],b[n+2];
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='U'&&a[i+1]=='R')
        {
            c--;
            i++;
        }
        else if(a[i]=='R'&&a[i+1]=='U')
        {
            c--;
            i++;
        }
    }
    printf("%d",c);
    return 0;
}
