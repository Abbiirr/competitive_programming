#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'findPoint' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER px
 *  2. INTEGER py
 *  3. INTEGER qx
 *  4. INTEGER qy
 */

vector<int> findPoint(int px, int py, int qx, int qy) {
    int dx=abs(px-qx),dy=abs(py-qy);
    vector<int> ans;
    if(dx==0 )
    {
        ans[0]=0;
    }
    if(dy==0 )
    {
        ans[1]=0;
    }
    if(px>qx)
    {
        ans[0] = px-dx;
    }
    else
    {
        ans[0] = px+dx;
    }
     if(py>qy)
    {
        ans[1] = py-dy;
    }
    else
    {
        ans[1] = py+dy;
    }
    return ans;

}
