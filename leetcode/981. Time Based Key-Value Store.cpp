

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
class TimeMap
{
public:
    map<string, vector<pair<string, int>>> mp;
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        if (mp.find(key) != mp.end())
        {
            // pair<string, int> p = make_pair(value, timestamp);
            mp[key].push_back(make_pair(value, timestamp));
        }
        else
        {
            vector<pair<string, int>> v;
            v.push_back(make_pair(value, timestamp));
            mp[key] = v;
        }
    }

    string get(string key, int timestamp)
    {

        vector<pair<string, int>> v = mp[key];
        int l = 0, r = v.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid].second == timestamp)
                return v[mid].first;
            else if (v[mid].second > timestamp)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (r >= 0)
            return v[r].first;
        // cout << "end of one: " << endl;
        return "";
    }
};

int main()
{

    //* run the function here
    //* you may need to do some couts
    TimeMap *obj = new TimeMap();
    string key = "foo";
    string value = "bar";
    int timestamp = 1;
    obj->set(key, value, timestamp);
    string param_2 = obj->get(key, timestamp);

    cout << param_2 << endl;

    cout << obj->get(key, 3) << endl;

    obj->set(key, "bar2", 4);

    cout << obj->get(key, 4) << endl;
    cout << obj->get(key, 5) << endl;
}