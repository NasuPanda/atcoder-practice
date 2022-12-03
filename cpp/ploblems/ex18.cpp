// https://atcoder.jp/contests/apg4b/tasks/APG4b_ce

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<vector<char>> resultTable(N, vector<char>(N, '-'));

  // 対戦結果表の更新
  for (int i = 0; i < M; i++) {
      // index に合わせたいので -1 しておく
      int winner = A.at(i) - 1;
      int loser = B.at(i) - 1;

      resultTable.at(winner).at(loser) = 'o';
      resultTable.at(loser).at(winner) = 'x';
  }

  // 出力
  int tableWidth = resultTable.at(0).size();
  for (int h = 0; h < N; h++) {
      for (int w = 0; w < N; w++) {
          cout << resultTable.at(h).at(w);

          // 最後の要素であれば改行
          if (w + 1 == tableWidth) {
              cout << endl;
          }
          // それ以外なら空白
          else {
              cout << ' ';
          }
      }
  }
}
