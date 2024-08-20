#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i())
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main() {
    int K, N;
    cin >> N >> K;
    vector<ll> H(N);
    for (auto &h : H) cin >> h;
    sort(all(H));
    ll ans = infl;
    for (int i=0; i<=(N-K); ++i) {
        ll diff = H[i+K-1] - H[i];
        chmin(ans, diff);
    }
    cout << ans << endl;
    return 0;
}
