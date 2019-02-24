#include <bits/stdc++.h>
using namespace std;

#define pq priority_queue
#define mp make_pair
#define cauto const auto &

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

#define clr(ar, val) memset(ar, val, sizeof(ar))

typedef long long int64;
typedef long long lint;
typedef long long lli;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef pair<int, int> pint;
typedef pair<long, long> plong;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;

const int iinf = 1 << 29;
const long long linf = 1ll << 61;

template <class T> bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T = int> T in() {
    T x;
    cin >> x;
    return (x);
}
template <class T> void print(T &x) {
    cout << x << '\n';
    return;
}

template <class T> ll sized_subset(T &comb) {
    T x = comb & -comb, y = x + comb;
    return ((comb & ~y) / x) >> 1 | y;
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ll a = in(), b = in(), q = in();
    vector<ll> s(a), t(b), x(q);
    REP(i, a) { cin >> s[i]; }
    REP(i, b) { cin >> t[i]; }
    REP(i, q) { cin >> x[i]; }
    REP(i, q) {
        auto shrineid = lower_bound(s.begin(), s.end(), x[i]);
        auto templeid = lower_bound(t.begin(), t.end(), x[i]);
        ll sl, sr, tl, tr;
        if (shrineid > s.begin()) {
            sl = *(shrineid - 1) - x[i];
        } else {
            sl = -linf;
        }
        if (shrineid < s.end()) {
            sr = *shrineid - x[i];
        } else {
            sr = linf;
        }
        if (templeid > t.begin()) {
            tl = *(templeid - 1) - x[i];
        } else {
            tl = -linf;
        }
        if (templeid < t.end()) {
            tr = *templeid - x[i];
        } else {
            tr = linf;
        }
        cout << min({sr + min(abs(tr - sr), abs(tl - sr)),
                     abs(sl) + min(abs(tr - sl), abs(tl - sl)),
                     abs(tl) + min(abs(sr - tl), abs(sl - tl)),
                     abs(tr) + min(abs(sl - tr), abs(sr - tr))})
             << endl;
    }
    return 0;
}
