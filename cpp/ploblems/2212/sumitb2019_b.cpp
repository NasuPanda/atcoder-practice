#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
// すんなり解けた。税込み価格に小数点以下が含まれる場合は切り捨てになるという仕様を知らなかったのでそこで苦戦した。

// N円を支払ったこと、税率が8%であることは分かる。
// 税抜き価格Xが分からない。
// NOTE: N円は間違っている(=税抜き価格が存在しえない金額)可能性がある
// NOTE: 税込み価格を求める時、小数点以下が存在する場合は切り捨て操作のみ行われる。(そういった仕様)

int main() {
    const double taxRate = 1.08;
    // N 円
    int N;
    cin >> N;
    
    for (int X=1; X<=N; X++) {
        double value = X * taxRate;
        // NOTE: 切り捨てだけ調べる
        if (floor(value) == N) {
            cout << X << endl;
            return 0;
        }
    }
    
    // ありえない値の場合
    cout << ":(" << endl;
    return 0;
}

