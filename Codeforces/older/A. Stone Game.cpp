/**
*
*			Abir Hossain
*
**/

#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SIZE			1e6
int caseno = 1;
using namespace std;

#define D(x)			cout << __LINE__ << " " << #x" = " << (x) << endl
#define D2(x,y)			cout << __LINE__ << " " << #x" = " << (x) << ", " << #y" = " << (y) << endl

#define CP()			printf("Case %d: ",caseno++)
#define R()			freopen("in.txt","r",stdin)
#define W()			freopen("out.txt","w",stdout)
#define RW			R(); W()

#define SFI(_i)			scanf("%d",&_i)
#define SFL(_i)			scanf("%lld",&_i)
#define SFII(_i,_ii)		scanf("%d%d",&_i,&_ii)
#define SFD(_i)			scanf("%lf",&_i)
#define SFC(_c)			scanf("%c",&_c)

#define PFIL(_i)		printf("%d\n",_i)
#define PFI(_i)			printf("%d",_i)
#define PFSL(_i)		printf("%s\n",_i)
#define PFS(_i)			printf("%s",_i)
#define NL			printf("\n")
#define SPC			printf(" ")

#define ALL(_c)			_c.begin(),_c.end()
#define ITE(_a,_b)		map<_a,_b>::iterator
#define MEM(_c,_v)		memset(_c,_v,sizeof(_c))
#define FOR(i,a,b)		for(int i=(a);i<(b);i++)
#define REV(i,a,b)		for(i=(a);i>=(b);i--)
#define valid(nx,ny)		nx>=0 && nx<30 && ny>=0 && ny<30

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef vector< PII > VII;

template<class T> inline T GCD(T a, T b) { if (a<0) return GCD(-a, b); if (b<0)return GCD(a, -b); while (b) { b ^= a ^= b ^= a %= b; } return a; }
template<class T> inline T LCM(T a, T b) { return a / GCD(a, b)*b; }
inline LL POW(const int &n, const int &k) { LL res = 1; FOR(i, 0, k - 1) res *= n; return res; }
inline int BigMod(int a, int p, int M) { int res = 1, x = a; while (p) { if (p & 1) res = ((LL)res * x) % M; x = ((LL)x * x) % M; p >>= 1; }	return res; }
bool way(int i, int n)
{
    if(n-i>i)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, ans=0, low= 101, high= -1, lowI, highI;
        cin >>n;
        vector<int> v(n);
        for(int j=0;j<n;j++)
        {
            cin >>v[j];
        }
        int maxI = max_element(v.begin(), v.end()) - v.begin();
        int minI = min_element(v.begin(), v.end()) - v.begin();

        ans = min(
                  max(minI, maxI) +1, min(   //destroy from left to right both
                  n - min(minI, maxI), min(  //destroy from right to left both
                  minI + n- maxI +1,   //destroy from left smallest then from right largest
                  maxI + n - minI +1    //destroy from right largest then from left smallest
                  )));
        cout <<ans<<endl;

    }




	return 0;
}
