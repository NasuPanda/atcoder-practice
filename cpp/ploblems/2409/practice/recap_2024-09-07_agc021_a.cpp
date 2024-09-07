#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string N; cin >> N;
    int c = N[0] - '0';
    int n = N.size();
    int ans = c + 9 * (n - 1);
    rep(i, 1, n) {
        if (N[i] == '9') continue;
        else {
            cout << ans - 1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}
