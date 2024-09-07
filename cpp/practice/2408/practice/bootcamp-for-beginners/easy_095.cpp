#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int oddCnt=0, evenCnt=0, ans=0;
    vector<int> X = {A,B,C};
    rep(i, 0, 3) {
        if (X[i] % 2 == 0) evenCnt++;
        else oddCnt++;
    }
    if (evenCnt == 0 | oddCnt == 0) {
        // Do nothing.
    }
    else if (evenCnt > oddCnt) {
        rep(i, 0, 3) if (X[i] % 2 == 0) X[i]++;
        ans++;
    } else if (evenCnt < oddCnt) {
        rep(i, 0, 3) if (X[i] % 2 == 1) X[i]++;
        ans++;
    }
    int xmax=-1;
    rep(i, 0, 3) chmax(xmax, X[i]);
    rep(i, 0, 3) ans += (xmax - X[i]) / 2;
    cout << ans << endl;
    return 0;
}
