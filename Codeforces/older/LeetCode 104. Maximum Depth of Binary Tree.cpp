#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int max_depth(int i, int a[])
{
    if(a[i]==null)
    {
        return 0;
    }
    return max(max_depth(a[i*2+1]),max_depth(a[i*2+1]));
}
int main()
{



    return 0;
}
