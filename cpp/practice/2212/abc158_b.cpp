
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc158/tasks/abc158_b
// 解法はすぐわかった longlongにするの忘れてた

int main() {
    long long N, blue, red;
    cin >> N >> blue >> red;

    long long q = floor(N / (blue + red));
    long long r = N % (blue + red);

    // 余りは赤も含む場合があるので、青のボール数と比較して小さい方を使う
    cout << blue * q + min(blue, r);
    return 0;
}
