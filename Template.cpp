#include <bits/stdc++.h>
using namespace std;

/**
 * author: gabspimentel
 * created:26/03/2025 - 18:45
**/

// ========================== MACROS ==========================
#define pb push_back
#define F first
#define S second
#define endl '\n'
#define vt vector
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define _ ios::sync_with_stdio(0); cin.tie(nullptr);
#define debug(x) cerr << #x << " = " << (x) << endl;
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define print(x) for(size_t i = 0; i < sz(x); ++i) cout << x[i] << " ";

// ========================== DATA TYPES ==========================
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpi;

// ========================== CONSTS ==========================
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int mx = 101;
const double EPS = 1e-9;

// ========================== FUNCTIONS ==========================

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_exp(ll a, ll b, ll m) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
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

// ========================== PROBLEM ==========================

void solve() {
    // Solve Problem
}

int32_t main() { _;
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
