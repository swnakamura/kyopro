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

ll power(ll base, ll exp) {
    ll ans = 1;
    REP(i, exp) ans *= base;
    return ans;
}

int sign(ll a) { return (a > 0) - (a < 0); }

ll n, i;
bool oneput;
vector<int> ans;
int main() {
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    while(n){
        ans.push_back(abs(n%2));
        if(i&1){
            n+=abs(n%2);
        }
        else n-=abs(n%2);
        n/=2;
        i++;
    }
    for(auto i=ans.end()-1;i!=ans.begin()-1;i--){cout<<*i;}
    return 0;
}
