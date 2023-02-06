#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int a,b,c,x,i;
    cin >>a>>b>>c;
    x=2*c+min(a,b)+min(max(a,b),min(a,b)+1);
    cout <<x;
    return 0;

}

