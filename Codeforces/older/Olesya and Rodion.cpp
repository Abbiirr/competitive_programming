#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,t,i,x=1,y=9;
    cin >>n>>t;
    for(i=1;i<n;i++)
    {
        x=x*10;
        y=y*10+9;
    }
    while(x%t!=0)
    {
        x++;
        if(x>y)
        {
            cout <<-1;
            return 0;
        }
    }
    cout <<x;

    return 0;
}
