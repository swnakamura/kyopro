// !! difficult... wants sized_subset to solve
#include <bits/stdc++.h>
using namespace std;

#define pq priority_queue
#define mp make_pair
#define cauto const auto &

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

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

#define clr(ar, val) memset(ar, val, sizeof(ar))

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

int a[5];
string s;
int main() {
    int n = in();
    REP(i, n) {
        cin >> s;
        switch (s[0]) {
        case 'M':
            a[1]++;
            break;
        case 'A':
            a[2]++;
            break;
        case 'R':
            a[3]++;
            break;
        case 'C':
            a[4]++;
            break;
        case 'H':
            a[0]++;
            break;
        }
    }
    ll ans = 0;
    ll comb = (1 << 3) - 1;
    while (comb < 1 << 5) {
        ll buf = 1;
        REP(i, 5) {
            buf *= (comb >> i) & 1 ? a[i] : 1;
        }
        ans += buf;
        comb = sized_subset(comb);
    }
    cout << ans << endl;
    return 0;
}
