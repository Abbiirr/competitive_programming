#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i=0; i<n;i++)
    {
        int px,py,qx,qy;
        cin >>px>>py>>qx>>qy;
        int dx=abs(px-qx),dy=abs(py-qy),ans[2];


        if(px>qx)
        {
            ans[0] = qx-dx;
        }
        else
        {
            ans[0] = qx+dx;
        }
         if(py>qy)
        {
            ans[1] = qy-dy;
        }
        else
        {
            ans[1] = qy+dy;
        }
        cout <<ans[0]<<" "<<ans[1]<<endl;
    }

}
