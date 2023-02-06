#include<iostream>
using namespace std;
#include<cstdio>
int unique_num(int n)
{
    int x,y,i,j,a[10]={0},r;
    x=n;
    y=x;
        for(i=0;y!=0;i++)
        {
           r=y%10;
           if(a[r]==1)
           {
               return 1;
           }
           else
            a[r]=1;
           y=y/10;
        }

        return 0;
}
int main()
{
    int l,r,x;
    cin >>l>>r;

    x=l;
    while(x<=r)
    {
        if(unique_num(x)==1)
            x++;
        else if(unique_num(x)==0)
            break;
    }
    if(x>r)
    {
        cout <<-1;
    }
    else
    cout <<x;
    return 0;

}
