#include <bits/stdc++.h>
#define pq priority_queue
#define mp make_pair
#define cauto const auto &

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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

typedef long long int64;
typedef long long lint;
typedef long long lli;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;

const int iinf = 1 << 29;
const long long linf = 1ll << 61;

ll n, k, ans;
int main() {
    cin >> n >> k;
    ll a[n], maxa = 0;
    REP(i, n) {
        cin >> a[i];
        maxa = max(maxa, a[i]);
    }
    ll numofone = 0, downbit = 0;
    ll maxabuf = maxa;
    while (maxabuf != 0) {
        maxabuf >>= 1;
        downbit++;
    }
    ll kcand = 0;
    while (downbit != -1) {
        REP(i, n) { ((a[i] >> downbit) & 1) == 1 ? numofone++ : 1; }
        if (kcand + (1 << downbit) <= k) {
            if (numofone >= n - numofone) {
                ans += (numofone << downbit);
            } else {
                ans += (n - numofone) << downbit;
                kcand += 1 << downbit;
            }
        } else {
            ans += numofone << downbit;
        }
        numofone = 0;
        downbit--;
    }
    cout << ans << endl;
}
