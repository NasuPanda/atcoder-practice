#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    rep(i, 0, N) {
        rep(j, 0, i+1) {
            cin >> A[i][j];
        }
    }
    int i = 0;
    rep(j, 0, N) {
        if (i >= j) i = A[i][j];
        else i = A[j][i];
        i--;
        // cout << j << " " << i << endl;
    }
    cout << i+1 << endl;
    return 0;
}