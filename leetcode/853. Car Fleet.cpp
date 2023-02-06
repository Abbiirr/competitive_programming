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
int carFleet(int target, vector<int> &position, vector<int> &speed)
{
    vector<pair<int, int>> car;
    for (int i = 0; i < position.size(); i++)
    {
        car.push_back(make_pair(position[i], speed[i]));
    }
    sort(car.rbegin(), car.rend());

    float time = (float)(target - car[0].first) / car[0].second;
    int ans = 1;
    for (int i = 1; i < car.size(); i++)
    {
        float tempTime = (float)(target - car[i].first) / car[i].second;
        if (tempTime > time)
        {
            ans++;
            time = tempTime;
        }
    }
    return ans;
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<int> positions = {10, 8, 0, 5, 3}, speed = {2, 4, 1, 1, 3};
    int ans = carFleet(12, positions, speed);
    cout << ans << endl;
}
