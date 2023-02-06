//https://codeforces.com/contest/334/problem/A
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,x,i,c,j;
    cin >>n;
    int a[n*n];
    x=n*n;
    for(i=1;i<=x/2;)  //in the nested loop i is increasing by n/2. so n/2*(n*n)/2=n*n. eg.: 6/2=3, 6*6=36/2=12, 12*3=36
    {
        
        for(j=0;j<n/2;i++,j++)  //I count by giving two bags to one then the next one, repeat the process. Hence j<n/2
        {
            cout <<i<<' '<<(n*n)-i+1<<' ';  //the count works on one end from 1 other from n*n
        }
        cout <<endl;
        
    }
    return 0;
}