#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int D, N;
vector<int> L(1000009), R(1000009);
// 前日比 B
vector<int> B(1000009);

int main() {
    cin >> D >> N;
    for (int i=1; i<=N; i++) cin >> L[i] >> R[i];

    // 前日比を求める
    B.at(0) = 0;
    for (int i=1; i<=N; i++) {
        B.at(L.at(i)) += 1;
        B.at(R.at(i) + 1) -= 1; // R側は1つ進める
    }

    // 累積和を求め、出力
    int ans = 0;
    for (int i=1; i<=D; i++) {
        ans += B.at(i);
        cout << ans << endl;
    }

	return 0;
}
