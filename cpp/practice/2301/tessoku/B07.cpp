#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_al

int T, N;
vector<int> L(500009), R(500009);
// 前の時間との変化
vector<int> B(500009);

int main() {
    // Input
    cin >> T >> N;
    rep(i, N) cin >> L.at(i) >> R.at(i);

    // B を初期化
    rep(i, T+1) B.at(i) = 0;
    // 前の時間との変化を加算
    // 見るのは 0.5 なので、
    rep(i, N+1) {
        B.at(L.at(i)) += 1;
        B.at(R.at(i)) -= 1;
    }

    // 累積和を加算、出力
    int ans=0;
    rep(i, T) {
        ans += B.at(i);
        cout << ans << endl;
    }

	return 0;
}


