//!!WA
//consider the case of 2 2 3 4
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

ll n,k;
ll x[100000];
ll ans=linf;
int main() {
    cin>>n>>k;
    REP(i,n){
        cin>>x[i];
    }
    REP(i,n-k+1){
        ans=min({ans,abs(x[i])+x[i+k-1]-x[i],abs(x[i+k-1])+x[i+k-1]-x[i]});
    }
    if(n==k){
        ans=x[n-1]-x[0]+min(abs(x[n-1]),abs(x[0]));
    }
    cout<<ans;
    return 0;
}
