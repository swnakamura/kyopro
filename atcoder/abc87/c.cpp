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

int n, a[2][103], ans;
int main() {
    n = in();
    REP(i, 2) {
        REP(j, n) {
            a[i][j] = in();
            ans += a[i][j];
        }
    }
    if(n==1){print(ans);return 0;}
    if(n==2){ans=ans-min(a[0][1],a[1][0]);print(ans);return 0;}

    REP(i,n-1){
        ans-=a[1][i];
    }
    int buf=ans;
    REP(i,n-1){
        ans=max(ans,buf-a[0][n-i-1]+a[1][n-i-2]);
        buf=buf-a[0][n-i-1]+a[1][n-i-2];
    }
    print(ans);return 0;
    return 0;
}
