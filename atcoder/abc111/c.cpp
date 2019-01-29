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

int n, x, mx1, mx2, x1, x2;
int cnt1[10003], cnt2[100003];
int main() {
    cin >> n;
    REP(i, n) {
        cin >> x;
        if (i % 2 == 0) {
            cnt1[x]++;
            if (cnt1[x] > mx1) {
                mx1 = cnt1[x];
                x1 = x;
            }
        } else {
            cnt2[x]++;
            if (cnt2[x] > mx2) {
                mx2 = cnt2[x];
                x2 = x;
            }
        }
    }

    sort(cnt1, cnt1 + 100003, greater<int>());
    sort(cnt2, cnt2 + 100003, greater<int>());

    if (mx1 == mx2)
        cout << n - max(mx1 + cnt2[1], mx2 + cnt1[1]) << endl;
    else
        cout << n - mx1 - mx2 << endl;
}
