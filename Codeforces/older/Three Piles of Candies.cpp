#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int t,i,j,a,sum;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        for(j=1;j<=3;j++)
        {
            cin >>a;
            sum=sum+a;
        }
        cout <<sum/2<<"\n";
    }
    return 0;
}
