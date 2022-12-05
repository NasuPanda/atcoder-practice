#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc132/tasks/abc132_c
// 簡単

int main() {
  int N;
  cin >> N;
  vector<int> D(N);
  rep(i, N) cin >> D.at(i);

  // 真ん中で区切った前後の値
  sort(D.begin(), D.end());
  pair<int, int> DMiddle = make_pair(D.at(D.size() / 2 - 1), D.at(D.size() / 2));

  // 真ん中で区切った前後の値が等しい場合kは存在しない。それ以外は差を求めればいい
  if (DMiddle.first == DMiddle.second) cout << 0;
  else cout << DMiddle.second - DMiddle.first;

  return 0;
}
