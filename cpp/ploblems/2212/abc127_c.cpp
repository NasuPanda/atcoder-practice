#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc127/tasks/abc127_c
// 何故か問題を理解するのに時間がかかった

int main() {
    int N, M; cin >> N >> M;
    vector<int> L(M), R(M);
    rep(i, M) {
        cin >> L.at(i);
        cin >> R.at(i);
    }
    int LMax = *max_element(L.begin(), L.end());
    int RMin = *min_element(R.begin(), R.end());
    int ans = 0;

    for (int i=1; i<=N; i++) {
        if ( LMax <= i && i <= RMin ) ans++;
    }

    cout << ans;
    return 0;
}
