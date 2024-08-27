#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<ll> H(N);
    rep(i, 0, N) cin >> H[i];
    H[0]--;
    rep(i, 1, N) {
        if (H[i] < H[i-1]) {
            cout << "No" << endl;
            return 0;
        }
        if (H[i] > H[i-1]) H[i]--;
    }
    cout << "Yes" << endl;
    // rep(i, 0, N) cout << H[i] << " ";
}
