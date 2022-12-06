#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc142/tasks/abc142_c
// ロジックは簡単。C++ の実装で苦労した。
// 構造体使わなくても, pairで良かったか。pairの方が拡張性は低いが手っ取り早いので一般的らしい。

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> dataArray(N);

    rep(i, N) {
        int tmp;
        cin >> tmp;
        dataArray.at(i) = make_pair(tmp, i+1); // 既に登校していた生徒数, 出席番号
    }

    sort(dataArray.begin(), dataArray.end());
    rep(i, N) cout << dataArray.at(i).second << ' ';

    return 0;
}
