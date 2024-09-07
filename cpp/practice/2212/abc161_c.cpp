#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc161/tasks/abc161_c
// 解説見た。「無限に操作」系は同じ状態を繰り返すようになった時どうなるかを考える。

int main() {
  long long N, K;
  cin >> N >> K;
  cout << min(N%K, K-N%K);
  return 0;
}
