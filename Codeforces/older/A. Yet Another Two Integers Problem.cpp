#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin >>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        int count;
        cin >>a>>b;
        double x = abs(a-b);
        count = ceil(x/10);
        cout <<count<<endl;
    }
    
    return 0;
}
