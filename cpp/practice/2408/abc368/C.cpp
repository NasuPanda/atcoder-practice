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
    vector<ll> H(N);
    ll ans=0;
    rep(i, 0, N) {
        ll h;
        cin >> h;
        if (h >= 5) {
            ans += (h / 5) * 3;
            H[i] = h % 5;
        } else {
            H[i] = h;
        }
    }
    ll turns=0;
    rep(i, 0, N) {
        ll h = H[i];
        while(h >= 1) {
            turns++;
            if (turns % 3 == 0) h -= 3;
            else h--;
        }
    }
    cout << ans + turns << endl;
    return 0;
}
