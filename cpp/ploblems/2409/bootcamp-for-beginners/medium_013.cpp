#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<int> T(N), X(N), Y(N);
    rep(i,0,N) cin >> T[i] >> X[i] >> Y[i];
    int prevX=0, prevY=0, prevT=0;
    string ans = "Yes";
    rep(i, 0, N) {
        int t = T[i], x = X[i], y = Y[i];
        t -= prevT;
        t -= abs(x - prevX);
        if (t < 0) ans = "No";

        if ((t >= abs(y - prevY)) & ((t + abs(y - prevY)) % 2 == 0)) {}
        else ans = "No";
        prevX = x;
        prevY = y;
        prevT = T[i];
        // cout << x << " " << y << " " << t << " " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
