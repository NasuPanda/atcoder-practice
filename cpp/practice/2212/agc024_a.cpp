#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/agc024/tasks/agc024_a
// 簡単。手を動かして数パターン挙げると分かる。

int main() {
    long long A,B,C,K; cin >> A >> B >> C >> K;

    if(K & 1) cout << B-A;
    else cout << -(B-A);

    return 0;
}
