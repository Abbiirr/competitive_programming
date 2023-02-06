

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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//* insert the functions here
ListNode *reverseList(ListNode *head)
{
    ListNode *newNode = NULL;
    ListNode *prev = NULL;
    ListNode *curr = head;
    if (head == NULL)
        return head;
    // curr = curr->next;
    // newNode = new ListNode(curr->val, newNode);
    while (curr->next != NULL)
    {
        // cout << curr->val << " " << prev->val << endl;
        newNode = new ListNode(curr->val, newNode);
        prev = curr;
        curr = curr->next;
    }
    curr = newNode;
    while (curr != NULL)
    {
        cout << curr->val << endl;
        curr = curr->next;
    }

    // cout << curr->val << endl;
    return newNode;
}

int main()
{

    //* run the function here
    //* you may need to do some couts
    vector<int> v = {1, 2, 3, 4, 5};
    ListNode *head = new ListNode(v[0]);
    head->next = new ListNode(v[1]);
    head->next->next = new ListNode(v[2]);
    head->next->next->next = new ListNode(v[3]);
    head->next->next->next->next = new ListNode(v[4]);
    head->next->next->next->next->next = new ListNode(v[5]);
    head->next->next->next->next->next->next = nullptr;
    reverseList(head);
}