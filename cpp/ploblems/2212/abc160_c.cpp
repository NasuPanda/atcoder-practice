#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc160/tasks/abc160_c
// 解法はすぐにわかった コードで若干苦戦

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, N) cin >> A.at(i);

  // 距離が最大の区間だけ避ければいい
  // 最初の家/最後の家の組み合わせを最初にセットしておく
  int lastIndex = A.size() - 1;
  int maxDistance = A.at(0) + (K - A.at(lastIndex));
  rep(i, N - 1) {
    int distance = A.at(i+1) - A.at(i);
    if (distance > maxDistance) maxDistance = distance;
  }
  cout << K - maxDistance;

  return 0;
}
