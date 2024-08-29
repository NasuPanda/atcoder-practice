#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll combination(int n, int r) {
    if (n < r) return 0;
    ll denominator=1;
    ll numerator=1;
    for (int i=r; i>=1; --i) denominator *= i;
    for (int i=n; i>=n-r+1; --i) numerator *= i;
    return numerator / denominator;
}

int main() {
    int N; cin >> N;
    vector<int> balls(200001, 0);
    vector<int> A(N);
    rep(i,0,N) {int a; cin>>a; balls[a]++; A[i]=a;}
    ll sum=0;
    rep(i,0,200001) {
        int a=balls[i];
        if (a >= 2) sum += combination(a, 2);
    }
    rep(i,0,N) {
        int k=A[i]; // K 個目のボール
        ll ans=sum;
        if (balls[k] >= 2) {
            ans -= combination(balls[k], 2);
            ans += combination(balls[k]-1, 2);
        }
        cout << ans << endl;
    }
    return 0;
}
