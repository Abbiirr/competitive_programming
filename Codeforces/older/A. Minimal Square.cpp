#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
int side(int a, int b)
{
    if(a<b)
        return 2*a;
    else
        return 2*b;
}
int main()
{
    int t;
    cin >>t;

    for(int i=0;i<t;i++)
    {
        int a,b,x;
        cin >>a>>b;

        x = side(a,b);
        if(x<a)
            x=a;
        else if(x<b)
            x=b;
        cout <<x*x<<endl;
        
        
    }
    
    return 0;
}
