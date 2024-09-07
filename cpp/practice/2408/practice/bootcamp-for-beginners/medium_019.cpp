#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int R, G, B, N;
    cin >> R >> G >> B >> N;

    ll ans=0;
    rep(r, 0, N/R + 1) {
        rep(g, 0, N/G + 1) {
            int remain = N - r*R - g*G;
            if (remain >= 0 && remain % B == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
