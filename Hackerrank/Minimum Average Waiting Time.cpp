#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <set>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <complex>
#include <map>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pll> vll;
typedef vector<string> vs;

int main() {
    int n;
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld%lld", &v[i].first, &v[i].second);
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    set<pii> q;  //set of pairs
    ll t = v[0].first;
    int it = 0;
    while (it < n || q.size()) {    //until it is not less than n or size of q is 0
        while (it < n && v[it].first <= t) {
            q.insert(pii(v[it].second, it)); //it is time here
            ++it;
        }
        if (q.empty()) {
            t = v[it].first;
        } else {
            int i = q.begin()->second;  //taking 2nd from first element(time taken)
            q.erase(q.begin()); //erasing first element
            t += v[i].second;   //time taken
            sum += t-v[i].first;    //waiting time is time taken - ordered time
        }
    }
    cout << sum / n << endl;
    return 0;
}
