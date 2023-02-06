#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    int x = min(min((k*l/nl)/n,(c*d)/n),(p/np)/n);
    

    cout <<x<<endl;
    

    return 0;
}
