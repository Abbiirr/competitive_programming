#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i;
    double area,a1,a2,a3,a,b,c,R1,R2,R3,ans,s,p;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>R1>>R2>>R3;
        cout <<"Case "<<i<<": ";
        a=R1+R2,b=R2+R3,c=R1+R3;
        p=a+b+c;
        s=p/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        a1=.5*R1*R1*acos((c*c+a*a-b*b)/(2*c*a));
        a2=.5*R2*R2*acos((b*b+a*a-c*c)/(2*a*b));
        a3=.5*R3*R3*acos((c*c+b*b-a*a)/(2*b*c));
        ans=area-a1-a2-a3;
        cout <<setprecision(15)<<ans<<endl;
    }
    return 0;
}
