#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<ll> A(N); rep(i,0,N) cin>>A[i];
    ll ans = N + (N - 1);

    int count=0;
    ll diff, lastDiff = A[1] - A[0];
    rep(i,1,N) {
        diff = A[i+1] - A[i];
        if (diff == lastDiff) count++;
        else {
            ans += (count * (1 + count)) / 2;
            count = 0;
        }
        lastDiff = diff;
    }
    if (count != 0) ans += (count * (1 + count)) / 2;
    cout << ans << endl;
    return 0;
}
