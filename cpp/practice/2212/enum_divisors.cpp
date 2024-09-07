#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<long long> enum_divisors(long long N) {
  vector<long long> res;

  for (long long i = 1; i*i <= N; i++) {
    if (N % i == 0) {
      res.push_back(i);
      // 重複が無ければiの相方も追加する
      if (N/i != i) res.push_back(N/i);
    }
  }
  // 小さい順に並び替える
  sort(res.begin(), res.end());
  return res;
}

int main() {
  int N;
  cin >> N;
  vector<long long> divisors = enum_divisors(N);
  for (long long i : divisors) cout << i << ' ';

  return 0;
}


