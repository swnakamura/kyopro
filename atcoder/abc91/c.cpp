//!! unable to solve, read editorial
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

template <class T = int> T in() {
    T x;
    cin >> x;
    return (x);
}

template <class T> void print(T &x) {
    cout << x << '\n';
    return;
}
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

int n;
pii red[103], blue[103];
bool usedred[103], usedblue[103];
int main() {
    cin >> n;
    REP(i, n) { cin >> red[i].first >> red[i].second; }
    REP(i, n) { cin >> blue[i].second >> blue[i].first; }
    sort(red, red + n, greater<pint>());
    sort(blue, blue + n);

    int ans = 0;
    REP(i, n) {
        REP(j, n) {
            if (red[i].first < blue[j].second &&
                red[i].second < blue[j].first && !usedred[i] && !usedblue[j]) {
                ans++;
                usedred[i] = 1;
                usedblue[j] = 1;
                break;
            }
        }
    }
    print(ans);
    return 0;
}
