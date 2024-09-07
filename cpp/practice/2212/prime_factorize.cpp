#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

/* 素因数分解: √Nまで割る, 素数で割れる限り割り続けることで指数を求める */
vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;

    for (long long a = 2; a*a <= N; ++a) {
      if (N % a != 0) continue;
      long long ex = 0; // 指数

      // 割り切れる限り割り続ける
      while (N % a == 0) {
        ++ex;
        N /= a;
      }
      res.push_back({a, ex});
    }
    // 最後に残った数
    if (N != 1) res.push_back({N, 1});
    return res;
}


int main() {
  int N;
  cin >> N;
  vector<pair<long long, long long> > result = prime_factorize(N);

  for (auto p : result) {
    rep(i, p.second) cout << p.first << ' ';
  }

  return 0;
}
