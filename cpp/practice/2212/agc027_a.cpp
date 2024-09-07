#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/agc027/tasks/agc027_a
// 「ちょうど配り切る」が厄介。

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);

    sort(a.begin(), a.end());

    int ans = 0;
    for (int elem : a) {
        x -= elem;
        // まだ残っている場合
        if (x > 0) ans++;
        // 以下配り終わり
        // ちょうど配り切れた場合
        else if (x == 0) {
            ans++;
            break;
        }
        // ちょうどは配りきれなかった場合
        else break;
    }

    // ループ内で配りきれていない場合の処理
    if (x > 0) ans--;
    cout << ans;
    return 0;
}
