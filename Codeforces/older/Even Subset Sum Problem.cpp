#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,i,j,x,y,z,n;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n];
        z=-1,x=-1,y=-1;
        cin >>a[0];
        if(a[0]%2==0)
        {
            z=1;
        }
        for(j=1;j<n;j++)
        {
            cin >>a[j];
            if(z==-1&&a[j]%2==0)
            {
                z=j+1;
            }
            if(a[j]%2!=0&&a[j-1]%2!=0)
            {
                x=j;
                y=j+1;
            }
        }
        if(z!=-1)
            cout <<"1\n"<<z<<"\n";
        else if(x!=-1&&y!=-1)
            cout <<"2\n"<<x<<' '<<y<<"\n";
        else
            cout <<-1<<"\n";
    }
    return 0;
}
