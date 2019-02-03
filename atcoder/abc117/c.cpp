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

int n,m,ans;
int main() {
    cin>>n>>m;
    int x[m],diff[m-1];
    REP(i,m){
        cin>>x[i];
    }
    sort(x,x+m);
    ans=x[m-1]-x[0];
    REP(i,m-1){
        diff[i]=x[i+1]-x[i];
    }
    sort(diff,diff+m-1,greater<int>());
    if(n>=m){cout<<0<<endl;return 0;}
    REP(i,n-1){
        ans-=diff[i];
    }
    cout<<ans<<endl;
    return 0;
}
