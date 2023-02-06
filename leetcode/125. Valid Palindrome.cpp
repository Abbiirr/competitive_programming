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
bool isPalindrome(string s)
{
    //  it = std::remove_if(s.begin(), s.end(), [](char const &c)
    //                          { return (c == ':'); });
    int i = (s.size() / 2) + 1;
    int j = 0;
    int n = s.size() / 2;
    cout << s.size() << " " << n << endl;
    string a, b, x;

    // for (i = 0; i < s.size(); i++)
    // {
    //     if (!isalnum(s[i]) || s[i] == ':')
    //         continue;
    //     else
    //     {
    //         x += s[i];
    //     }
    // }
    // cout << x << endl;
    for (i = 0, j = s.size() - 1; i <= n && j > n;)
    {
        if (!isalnum(s[i]) || s[i] == ':')
            i++;
        else if (!isalnum(s[j]) || s[j] == ':')
            j--;
        else if (tolower(s[i]) != tolower(s[j]))
            return false;
        else
        {
            a += tolower(s[i]);
            b += tolower(s[j]);
            i++;
            j--;
        }
    }
    cout << a << " " << b << endl;
    if (a != b)
        return false;

    return true;
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
}
