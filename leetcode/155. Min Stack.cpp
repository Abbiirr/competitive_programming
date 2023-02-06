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
class MinStack
{
    stack<int> s;
    int minE;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        s.push(val);
        if (s.size() == 1)
            minE = val;
        else
            minE = min(minE, val);
    }

    void pop()
    {
        if (s.size() == 0)
            return;
        int t = s.top();
        s.pop();
        if (t == minE)
        {
            minE = s.top();
            stack<int> temp;
            while (s.size() > 1)
            {
                temp.push(s.top());
                s.pop();
                minE = min(minE, s.top());
            }
            while (temp.size() > 0)
            {
                s.push(temp.top());
                temp.pop();
            }
        }
    }

    int top()
    {
        if (s.size() > 0)
            cout << "Top is: " << s.top() << endl;
        if (s.size() == 0)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return s.top();
    }

    int getMin()
    {
        if (s.size() > 0)
            cout << "Min is: " << minE << endl;
        if (s.size() == 0)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return minE;
    }
};

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<int> v = {-2, 0, 3, 0};
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);
    s.getMin();
    s.pop();
    s.top();
    s.getMin();
}
