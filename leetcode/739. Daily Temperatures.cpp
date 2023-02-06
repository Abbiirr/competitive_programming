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
vector<int> dailyTemperatures(vector<int> &temperatures)
{
    vector<int> ans(temperatures.size(), 0);
    map<int, int> mp;
    for (int i = 0; i < temperatures.size() - 1; i++)
    {
        if (i > 0 && temperatures[i] == temperatures[i - 1])
        {
            if (ans[i - 1] != 0)
            {
                ans[i] = ans[i - 1] - 1;
                continue;
            }

            else
                ans[i] = 0;
            continue;
        }

        int x = temperatures[i];
        ans[i] = 0;
        if (mp.find(x) != mp.end() && mp[x] > i)
        {
            ans[i] = mp[x] - i;
            // mp[x] = i;
            continue;
        }
        else
        {
            for (int j = i + 1; j < temperatures.size(); j++)
            {
                if (temperatures[j] > x)
                {
                    mp[x] = j;
                    ans[i] = j - i;
                    break;
                }
            }
        }
    }
    return ans;
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<int> v = {89, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    vector<int> ans = dailyTemperatures(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
