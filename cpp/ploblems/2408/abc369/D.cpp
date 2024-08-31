#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<ll> A(N); rep(i, 0, N) cin >> A[i];
    ll ans=0;
    int monster=0;

    rep(i, 0, N) {
        if (monster % 2 == 0) ans += A[i];
        else {
            if (i == N - 1) ans += 2 * A[i]; // 終端処理
            else {
                if (2 * A[i] > A[i+1] * 2) ans += 2 * A[i];
                else {
                    ans += 2 * A[i+1];
                    i++;
                }
            }
        }
        monster++;
        // cout << "Monster: " << monster << " , i: " << i << " ans: " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
