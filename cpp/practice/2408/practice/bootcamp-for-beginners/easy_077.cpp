#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
int main() {
    int N;
    cin >> N;
    vector<ll> a(3 * N);
    for (auto &x : a) cin >> x;
    ll ans = 0;
    sort(all(a), greater<>());
    int index=1;
    rep(i, 0, N) {
        ans += a[index];
        index += 2;
        // a[3 * N - 1 - i];
    }
    cout << ans << endl;
    return 0;
}