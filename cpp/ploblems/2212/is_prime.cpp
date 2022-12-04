#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isPrime(long long N) {
  if (N == 1) return false;
  for (long long i=2; i*i <= N; i++) {
    if (N%i == 0) return false;
  }
  return true;
}

int main() {
  long long N;
  cin >> N;

  string judge = (isPrime(N))? "Yes" : "No";
  cout << judge;

  return 0;
}
