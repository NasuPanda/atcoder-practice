#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int n(double x, int _k) {
    double k = _k;
    return ceil(log2(k / x));
}

int main() {
    int _N, K; cin >> _N >> K;
    double ans=0;
    double N=_N;
    rep(_x, 1, _N+1) {
        double x = _x;
        if (x >= K) ans += 1.0 / N;
        else {
            ans += pow(0.5, n(x, K)) * (1.0 / N);
        }
    }
    cout << fixed << setprecision(12);
    cout << ans << endl;
    return 0;
}
