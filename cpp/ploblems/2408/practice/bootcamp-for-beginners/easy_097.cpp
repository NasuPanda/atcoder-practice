#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, M; cin >> N >> M;
    vector<pair<ll, int>> stores(N);
    rep(i, 0, N) {ll a; int b; cin >> a >> b; stores[i] = make_pair(a, b);}
    sort(all(stores));
    ll ans=0;
    rep(i, 0, N) {
        ll a = stores[i].first;
        int b = stores[i].second;
        if (M > b) {ans += a * b; M-=b;}
        else {ans += M * a; break;}
    }
    cout << ans << endl;
    return 0;
}
