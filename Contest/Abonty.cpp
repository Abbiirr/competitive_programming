#include<iostream>
using namespace std;
int main()
{long long int n,a,i,j,c=0,d;
cin>>n>>a;
if(a<=n){cout<<(n-a);}
else
{for(i=1;;i++)
{if(n>=a)
break;
else
   { n=n*2;
    c++;}}
j=(n-a);
cout<<(c+j)<<endl;}}
