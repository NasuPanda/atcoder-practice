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
    vector<ll> T1(N-1), T2(N-1);
    T1[0] = A[0];
    T2[N-2] = A[N-1];
    rep(i, 1, N-1) {T1[i] = A[i] + T1[i-1];}
    for(int i=N-3; i>=0; --i) {T2[i] = A[i+1] + T2[i+1];}
    ll ans=infl;
    rep(i, 0, N-1) chmin(ans, abs(T1[i] - T2[i]));
    cout << ans << endl;
}
