#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int a[5][5],x,y,i,j,t;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >>a[i][j];
            if(a[i][j]==1)
            {
                x=i+1;
                y=j+1;
                break;
            }
        }
    }
    t=abs(3-x)+abs(3-y);
    cout <<t;
    return 0;
}
