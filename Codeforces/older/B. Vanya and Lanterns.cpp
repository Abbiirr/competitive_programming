#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,l;
    cin >>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }

    sort(a,a+n);
    double d = max(a[0], l-a[n-1]);
    for(int i=1;i<n;i++)
    {
        double dx = a[i]-a[i-1];
        dx = dx/2;
        d = max(d,dx);
    }
     std::cout << std::fixed;
    std::cout << std::setprecision(9);
    cout <<d<<endl;

    return 0;
}
