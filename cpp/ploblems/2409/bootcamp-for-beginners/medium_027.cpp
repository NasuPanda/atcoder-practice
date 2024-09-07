#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    string s, t; cin >> s >> t;
    string str = s + t;
    int ans = str.size();
    rep(i, N, 2*N) {
        rep(j, i, 2*N) {
            string S;
            rep(k, 0, 2*N) {
                if (i <= k && k <= j) continue;
                else S.push_back(str[k]);
            }
            int currentSize = S.size();
            if (S.substr(0, N) == s && S.substr(currentSize - N, N) == t) chmin(ans, currentSize);
        }
    }
    cout << ans << endl;
    return 0;
}
