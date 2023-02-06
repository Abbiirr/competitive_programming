#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i,d,y1,y2,x;
    char c;
    cin >>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        string a,b;
        x=0;
        cin >>a>>d>>c>>y1;
        if(y1%400==0||(y1%4==0&&y1%100!=0))
        {
            if(a!="January"&&a!="February")
            {
                y1++;
            }

        }

        cin >>b>>d>>c>>y2;
        if(y2%400==0||(y2%4==0&&y2%100!=0))
        {
            if(b=="January")
            {
                y2--;
            }
            else if(b=="February"&&d<29)
                y2--;

        }

        x=(y2/4-y2/100+y2/400)-((y1-1)/4-(y1-1)/100+(y1-1)/400);

        cout <<"Case "<<i<<": ";
        cout <<x<<endl;
    }
    return 0;
}
