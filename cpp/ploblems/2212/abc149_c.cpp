#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc149/tasks/abc149_c
// 超簡単

bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i*i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    while(true) {
        // Xが素数である場合も考慮する
        if(is_prime(X)) {
            cout << X;
            return 0;
        }
        X++;
    }
}
