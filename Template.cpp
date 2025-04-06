#include <bits/stdc++.h>
using namespace std;

/**
 * author: gabspimentel
 * created:26/03/2025 - 18:45
**/

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define in(x,n) for(int i = 0; i < n; i++) cin >> x[i];
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpi;
typedef vector<pll> vpll;
const int MOD = 1e9 + 7;
const int INF = 2e9;
const ll LINF = 1e18;
const double EPS = 1e-9;
const int MAXN = 1e5 + 5;
inline ll gcd(ll a, ll b) { while (b) a %= b, swap(a, b); return a; }
inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
inline ll ceil_div(ll a, ll b) { return (a + b - 1) / b; }
ll mod_exp(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int binary_search(vi &arr, int x) {
    int l = 0, r = sz(arr);
    while(l < r){
        int m =(l+r) / 2;
        if(arr[m] < x)
            l = m + 1;
        else
            r = m;
    }
    if(l >= sz(arr))
        return -1;
    return ((arr[l] == x)? l+1:-1);
}
#ifdef LOCAL
template<typename T>
void debug_vec(const vector<T>& v, string name = "") {
    if (!name.empty()) cerr << name << " = ";
    cerr << "[ ";
    for (auto x : v) cerr << x << " ";
    cerr << "]\n";
}
#else
#define debug_vec(x, name)
#endif
// ===============================================================
void solve() {
    // Resolution
}

int32_t main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
