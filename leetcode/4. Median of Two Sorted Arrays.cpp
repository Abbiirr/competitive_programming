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
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{

    int m = nums1.size();
    int n = nums2.size();
    int i = 0, j = 0;
    //* I need to store 2 medians in case the combined array is of even size
    //* then median would be average of two medians
    int median1 = -1, median2 = -1;

    //* I could use other approaches to count the number of iterations
    int count = 0;

    //* I iterate half the total size, because median would be in the half
    //* including the center of course
    for (count = 0; count <= (m + n) / 2; count++)
    {
        //* each step I update median2 to a previous value because in case of
        //* two medians they would sequential and smaller and greater
        median2 = median1;

        if (i != m && j != n)
        {
            //* I only need to hold the current greatest value(s) of left half
            //* as median
            if (nums1[i] < nums2[j])
            {
                median1 = nums1[i++];
            }
            else if (nums2[j] <= nums1[i])
            {
                median1 = nums2[j++];
            }
        }
        else if (i < m)
        {
            median1 = nums1[i++];
        }
        else
        {
            median1 = nums2[j++];
        }
    }

    //* checking odd, even and calculating median for that
    if ((m + n) % 2 == 0)
    {
        return (median1 + median2) / 2.0;
    }
    else
    {
        return median1;
    }
    return 0;
}

int main()
{
    //* run the function here
    //* you may need to do some couts
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double ans = findMedianSortedArrays(nums1, nums2);
    cout << (ans == 2 ? "true" : "false") << endl;
}
