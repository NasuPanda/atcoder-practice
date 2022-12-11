#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (int)(n); i++)

// https://atcoder.jp/contests/abc087/tasks/abc087_b
// 簡単

int main() {
    int A, B, C, X, ans=0;
    cin >> A >> B >> C >> X;

    rep(num_500, A) {
        rep(num_100, B) {
            rep(num_50, C) {
                if (X == 500*num_500+100*num_100+50*num_50) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
