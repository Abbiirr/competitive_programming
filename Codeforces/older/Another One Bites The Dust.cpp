#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int a,b,c,x,i;
    cin >>a>>b>>c;
    x=2*c;
    if(a>b)
    {
        x=x+b+b+1;
    }
    else if(a==b)
    {
        x=x+a+b;
    }
    else
    {
        x=x+a+a+1;
    }
    cout <<x;
    return 0;

}
