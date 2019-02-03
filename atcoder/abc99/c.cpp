// !!WA, and can be solved without DP
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

int n, x, ans;
vector<int> a = {1};
int dp[100003];
int main() {
    cin >> n;

    x = 6;
    while (x < 100000) {
        a.push_back(x);
        x *= 6;
    }
    x = 9;
    while (x < 100000) {
        a.push_back(x);
        x *= 9;
    }
    sort(a.begin(), a.end(), greater<int>());

    REP(i,100001){
        dp[i]=iinf;
    }

    dp[0]=0;

    REP(i,100001){
        for(auto ite=a.begin();ite!=a.end();ite++){
            if(i+*ite<100003){
                dp[i+*ite]=min(dp[i+*ite],dp[i]+1);
            }
        }
    }
    cout<<dp[n];
    return 0;
}
