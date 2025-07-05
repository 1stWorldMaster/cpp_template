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

// /*  Disjoint‑Set Union (Union‑Find)  */
// struct DSU {
//     vector<int> p, sz;
//     DSU(int n = 0) { init(n); }
//     void init(int n) { p.resize(n, -1); iota(all(p), 0); sz.assign(n, 1); }
//     int find(int v) { return v == p[v] ? v : p[v] = find(p[v]); }
//     bool unite(int a, int b) {
//         a = find(a); b = find(b);
//         if (a == b) return false;
//         if (sz[a] < sz[b]) swap(a, b);
//         p[b] = a; sz[a] += sz[b];
//         return true;
//     }
// };

int soution(){

}
/* for now expects input like 
3
3
1 2 3
...*/

/*  Main driver  */
int main() {
    /*  Example: solve multiple test cases  */
    int T = 1;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        cout<<solution()
    }
    return 0;
}
