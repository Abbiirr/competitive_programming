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
vector<string> encode(vector<string> &strs)
{
    // write your code here
    vector<string> output;
    for (int i = 0; i < strs.size(); i++)
    {
        output.push_back(strs[i] + ':' + ';');
    }
    return output;
}

/*
 * @param str: A string
 * @return: dcodes a single string to a list of strings
 */
vector<string> decode(vector<string> &str)
{
    // write your code here
    vector<string> output;
    string temp = "";
    for (int j = 0; j < str.size(); j++)
    {
        for (int i = 0; i < str[j].size(); i++)
        {
            if (str[j][i] == ':' | str[j][i] == ';')
            {
                output.push_back(temp);
                temp = "";
            }
            else
            {
                temp += str[j][i];
            }
        }
    }
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] == ':' | str[i] == ';')
    //     {
    //         output.push_back(temp);
    //         temp = "";
    //     }
    //     else
    //     {
    //         temp += str[i];
    //     }
    // }
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<string> input = {"lint", "code", "love", "you"};
    vector<string> encoded = encode(input);
    vector<string> output = decode(encoded);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}
