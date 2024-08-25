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
    int N = S.size() + 1;
    vector<int> R(N), L(N);
    rep(i, 0, N) {
        if (S[i] == '<') R[i+1] = R[i] + 1;
    }
    for (int i=N-2; i>=0; --i) {
        if (S[i] == '>') L[i] = L[i+1] + 1;
    }
    ll ans=0;
    rep(i, 0, N) ans += max(R[i], L[i]);
    cout << ans << endl;
    return 0;
}
