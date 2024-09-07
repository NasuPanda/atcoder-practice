#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string S;
    cin >> S;
    ll K;
    cin >> K;
    // If all from S[0] to S[K] is 1, the answer is 1.
    int sum=0;

    if (K <= S.size()) {
        rep(i, 0, K) {
            if (S[i] == '1') sum++;
        }
        if (sum == K) {
            cout << '1' << endl;
            return 0;
        }
    }
    char ans;
    rep(i, 0, S.size()) {
        if (S[i] != '1') {
            ans = S[i];
            break;
            }
    }
    cout << ans << endl;
    return 0;
}
