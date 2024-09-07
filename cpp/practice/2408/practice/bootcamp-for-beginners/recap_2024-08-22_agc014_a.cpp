#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    ll A, B, C;
    cin >> A >> B >> C;
    if (A % 2 == 1 || B % 2 == 1 || C % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    rep(i, 0, 100) {
        ans++;
        ll tmpA = (B + C) / 2;
        ll tmpB = (C + A) / 2;
        ll tmpC = (A + B) / 2;
        A = tmpA;
        B = tmpB;
        C = tmpC;
        if (A % 2 == 1 || B % 2 == 1 || C % 2 == 1) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
