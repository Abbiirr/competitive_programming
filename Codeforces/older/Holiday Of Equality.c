//https://codeforces.com/problemset/problem/758/A
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,mx=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>mx)
            mx=a[i];
    }
    for(i=0;i<n;i++)
    {
        c+=mx-a[i];
    }
    printf("%d",c);
    return 0;
}