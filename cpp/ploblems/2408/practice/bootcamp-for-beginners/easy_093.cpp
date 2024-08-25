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
    vector<ll> A(N);
    ll sum=0;
    rep(i, 0, N) {cin >> A[i]; sum+= A[i];}
    vector<ll> cumulativeSumFromFront(N), cumulativeSumFromBack(N);
    cumulativeSumFromFront[0] = A[0];
    cumulativeSumFromBack[0] = sum - A[0];
    ll ans=infl;
    rep(i, 1, N) {
        cumulativeSumFromFront[i] = A[i] + cumulativeSumFromFront[i-1];
        cumulativeSumFromBack[i] = sum - cumulativeSumFromFront[i];
        chmin(ans, abs(cumulativeSumFromFront[i] - cumulativeSumFromBack[i]));
    }
    cout << ans << endl;
    return 0;
}
