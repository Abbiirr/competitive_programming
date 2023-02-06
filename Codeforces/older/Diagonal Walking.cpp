#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,c=0;
    char a[1005];
    cin >>n>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='U'&&a[i+1]=='R')
        {
            i++;
            c++;
        }
        else if(a[i]=='R'&&a[i+1]=='U')
        {
            i++;
            c++;
        }
    }
    cout <<n-c;
    return 0;
}
