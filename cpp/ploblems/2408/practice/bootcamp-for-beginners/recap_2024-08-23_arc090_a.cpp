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
    rep(i, 0, 2) {
        rep(j, 0, N) cin >> A[i][j];
    }
    int ans=0;
    rep(i, 0, N) {
        int sum=0;
        rep(j, 0, N) {
            if (j == i) sum += A[0][j] + A[1][j];
            else if (j < i) sum += A[0][j];
            else if (j > i) sum += A[1][j];
        }
        chmax(ans, sum);
    }
    cout << ans << endl;
}
