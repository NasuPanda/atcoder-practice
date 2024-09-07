#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/agc014/tasks/agc014_a
// 自力では解けなかった。
// 解説: https://drken1215.hatenablog.com/entry/2019/07/05/113600
// 計算量の見積もりがよく分からない「同じ操作を何度も繰り返す系の問題」は、とりあえず十分大きな値やってみるのも手。

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  rep(i, 1000) {
    // A & 1 => ビット演算による偶奇判定
    if (A & 1 || B & 1 || C & 1) {
      cout << i;
      return 0;
    }
      long long tempA = (B+C) / 2;
      long long tempB = (A+C) / 2;
      long long tempC = (A+B) / 2;
      A=tempA, B=tempB, C=tempC;
  }

  // 無限に続けられるパターン
  cout << -1;
  return 0;
}
