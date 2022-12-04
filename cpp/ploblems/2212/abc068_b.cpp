#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc068/tasks/abc068_b
// 簡単

// 正整数 N が与えられる。1 以上 N 以下の整数のうち、最も 2 で割れる回数が多いものを求めよ。

int main() {
  int N, ans=1, maxDivideNum=0;
  cin >> N;

  for (int i=2; i<=N; i+=2) {
    int divideNum = 0;
    int tmp = i;

    while(tmp % 2 == 0) {
      tmp /= 2;
      ++divideNum;
    }

    if (maxDivideNum < divideNum) {
      maxDivideNum = divideNum;
      ans = i;
    }
  }
  cout << ans;
  return 0;
}
