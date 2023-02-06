/**
 *
 *			Abir Hossain
 *
 **/

#include <bits/stdc++.h>
#define PI 2 * acos(0.0)
#define SIZE 1e6
int caseno = 1;
using namespace std;

#define D(x) cout << __LINE__ << " " << #x " = " << (x) << endl
#define D2(x, y) cout << __LINE__ << " " << #x " = " << (x) << ", " << #y " = " << (y) << endl

#define CP() printf("Case %d: ", caseno++)
#define R() freopen("in.txt", "r", stdin)
#define W() freopen("out.txt", "w", stdout)
#define RW \
    R();   \
    W()

#define SFI(_i) scanf("%d", &_i)
#define SFL(_i) scanf("%lld", &_i)
#define SFII(_i, _ii) scanf("%d%d", &_i, &_ii)
#define SFD(_i) scanf("%lf", &_i)
#define SFC(_c) scanf("%c", &_c)

#define PFIL(_i) printf("%d\n", _i)
#define PFI(_i) printf("%d", _i)
#define PFSL(_i) printf("%s\n", _i)
#define PFS(_i) printf("%s", _i)
#define NL printf("\n")
#define SPC printf(" ")

#define ALL(_c) _c.begin(), _c.end()
#define ITE(_a, _b) map<_a, _b>::iterator
#define MEM(_c, _v) memset(_c, _v, sizeof(_c))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REV(i, a, b) for (i = (a); i >= (b); i--)
#define valid(nx, ny) nx >= 0 && nx < 30 && ny >= 0 && ny < 30
#define EL cout << endl;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef vector<PII> VII;

//* insert the functions here
vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    if (intervals.size() == 0)
        return vector<vector<int>>{newInterval};
    if (intervals.size() == 1)
    {
        if (intervals[0][0] > newInterval[0])
        {
            if (intervals[0][0] > newInterval[1])
                return vector<vector<int>>{newInterval, intervals[0]};
            else
            {
                return vector<vector<int>>{{newInterval[0], max(intervals[0][1], newInterval[1])}};
            }
        }

        else if (intervals[0][0] < newInterval[0])
        {
            if (intervals[0][1] < newInterval[0])
                return vector<vector<int>>{intervals[0], newInterval};
            else
            {
                return vector<vector<int>>{{min(intervals[0][0], newInterval[0]), max(intervals[0][1], newInterval[1])}};
            }
        }
        else if (intervals[0][0] == newInterval[0])
            return vector<vector<int>>{{newInterval[0], max(intervals[0][1], newInterval[1])}};
    }

    vector<vector<int>> ans;
    int n = intervals.size();
    int reached = 0;
    int left = -1, right = -1;
    int i = 1;
    if (intervals[0][0] > newInterval[0])
    {
        left = newInterval[0];
    }
    else
    {
        for (; i < n; i++)
        {
            if (intervals[i][0] < newInterval[0])
            {
                ans.push_back(intervals[i - 1]);
                continue;
            }

            if (intervals[i][0] > newInterval[0] || intervals[i][1] < newInterval[0])
            {
                left = intervals[i - 1][0];
                break;
            }
        }
    }

    if (intervals[0][1] > newInterval[1])
    {
        right = newInterval[1];
        ans = intervals;
    }
    else
    {
        for (; i < n; i++)
        {
            if (intervals[i][1] < newInterval[1])
                continue;
            if (intervals[i][1] == newInterval[1])
            {
                cout << "equal found" << endl;
                right = intervals[i][1];
                break;
            }
            if (intervals[i][1] > newInterval[1])
            {
                if (intervals[i - 1][1] < newInterval[1])
                {
                    right = newInterval[1];
                    for (; i < n; i++)
                    {
                        if (intervals[i][0] > right)
                            break;
                        if (intervals[i][0] == right)
                        {
                            right = intervals[i][1];
                            i++;
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    if (left == -1)
        cout << "left not found" << endl;
    if (right == -1)
    {
        cout << "right not found" << endl;
        // right = newInterval[1];
        // ans.push_back(vector<int>{left, right});
    }
    if (right != -1 && left != -1)
    {
        ans.push_back(vector<int>{left, right});
        for (; i < n; i++)
        {
            ans.push_back(intervals[i]);
        }
    }

    cout << left << " " << right << endl;
    return ans;
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<vector<int>> intervals = {{1, 5}};
    vector<int> newInterval = {2, 7};
    // insert(intervals, newInterval);
    vector<vector<int>> ans = insert(intervals, newInterval);
    for (auto v : ans)
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
        EL;
    }
}
