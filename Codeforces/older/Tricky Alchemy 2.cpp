#include<cstdio>
#include<iostream>
#include<algorithm>

#include<math.h>
using namespace std;
int main()
{
     int a,b,x,y,z;
     long long int t=0;
    scanf("%d%d%d%d%d",&a,&b,&x,&y,&z);

    t=max(0,2*x+y-a)+max(0,3*z+y-b);
    if(t<=0)
        printf("0");
    else
        printf("%lld",t);
    return 0;

}

