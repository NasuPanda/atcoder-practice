#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    ll A;
    set<ll> ans;
    rep(i, 0, N) {
        cin >> A;
        if (ans.count(A)) ans.erase(A);
        else ans.insert(A);
    }
    cout << ans.size() << endl;
    return 0;
}
