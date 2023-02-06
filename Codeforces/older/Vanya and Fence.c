//https://codeforces.com/problemset/problem/677/A
#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int a[n],i,w=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            w++;
    }
    printf("%d",w);
    return 0;
}