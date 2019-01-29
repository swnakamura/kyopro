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

char s[200000],t[200000];
char stot[26],ttos[26];
int main() {
    cin>>s>>t;
    REP(i,sizeof(s)/sizeof(char)){
        if(stot[s[i]-'a']==0){
            stot[s[i]-'a']=t[i];
        }else{
            if(stot[s[i]-'a']!=t[i]) {cout<<"No"<<endl;return 0;}
        }
        if(ttos[t[i]-'a']==0){
            ttos[t[i]-'a']=s[i];
        }else{
            if(ttos[t[i]-'a']!=s[i]) {cout<<"No"<<endl;return 0;}
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
