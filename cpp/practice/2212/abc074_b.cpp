#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc074/tasks/abc074_b
// 簡単

int main() {
  int N, K, totalDistance=0;
  cin >> N >> K;

  for (int i=1; i<=N; i++) {
    int x, distance;
    cin >> x;

    // 距離が小さい方を採用
    distance = (abs(x - K) > abs(x - 0)) ? abs(x-0) : abs(x-K);
    totalDistance += distance*2;
  }

  cout << totalDistance << endl;

  return 0;
}
