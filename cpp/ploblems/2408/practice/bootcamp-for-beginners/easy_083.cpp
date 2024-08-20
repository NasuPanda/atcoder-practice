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
    vector<vector<int>> A(2, vector<int>(N));
    vector<vector<int>> sum(2, vector<int>(N));
    rep(i, 0, 2) {
        rep(j, 0, N) cin >> A[i][j];
    }
    rep(i, 0, 2) {
        int tmp=0;
        rep(j, 0, N) {
            tmp += A[i][j];
            sum[i][j] = tmp;
        }
    }
    int ans=0;
    rep(i, 0, N) {
        chmax(ans, sum[0][i] + sum[1][N-1] - sum[1][i-1]);
    }
    cout << ans << endl;
    return 0;
}
