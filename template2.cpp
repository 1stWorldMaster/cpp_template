#include <bits/stdc++.h>
using namespace std;

/* Shortcuts */
using ll  = long long; 
using ull = unsigned long long;  
using ld  = long double;

/*  Constants  */
const ll  INF64 = 4e18;
const int INF32 = 2e9;
const ll  MOD   = 1'000'000'007LL;   // change if needed

/*  Shortcuts  */
#define pb      push_back
#define eb      emplace_back
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

/*  Debug helper (toggle with LOCAL flag)  */
#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << (x) << '\n'
#else
    #define dbg(x)
#endif

/*  Fast I/O  */
static struct FastIO {
    FastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout << fixed << setprecision(12);
    }
} fastio;

/*  Modular arithmetic helpers  */
ll addmod(ll a, ll b, ll m = MOD) { return (a += b) >= m ? a - m : a; }
ll submod(ll a, ll b, ll m = MOD) { return (a -= b) <  0 ? a + m : a; }
ll mulmod(ll a, ll b, ll m = MOD) { return (a * 1LL * b) % m; }

ll powmod(ll a, ll e, ll m = MOD) {
    ll res = 1;
    while (e) {
        if (e & 1) res = mulmod(res, a, m);
        a = mulmod(a, a, m);
        e >>= 1;
    }
    return res;
}


ll solution(int n) {
    
    return 0;
}

/*  Main driver  */
int main() {
    int T = 1;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;

        cout << solution(n);
    }
    return 0;
}
