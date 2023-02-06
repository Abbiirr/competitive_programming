//https://codeforces.com/problemset/problem/509/A
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n]={1},i,j,maxval=0;
    for(i=0;i<n;i++)
    {
        a[0][i]=1;
        //printf("1 ");
    }
    //printf("\n");
    for(i=1;i<n;i++)
    {
        a[i][0]=1;
        //printf("1 ");
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
            //printf("%d ",a[i][j]);
        }
        //printf("\n");
    }
    printf("%d",a[n-1][n-1]);
    return 0;
}