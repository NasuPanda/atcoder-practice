#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc153/tasks/abc153_d
// 割と簡単。intだと桁が足りていないことに気づくまで時間がかかった。

int main() {
    long long H;
    cin >> H;

    if(H == 1) {
        cout << 1;
        return 0;
    }

    // 分割回数の合計を求める(1になるまで割り続ける)
    // int numberOfDivide = 0;
    // while(true) {
    //     H = floor(H / 2);
    //     numberOfDivide++;
    //     if (H == 1) break;
    // }

    // log2を求めるだけでいい
    int numberOfDivide = floor(log2(H));

    // 2**i (0<= i <= numberOfDivide) を合計する
    long long ans=0;
    for (int i=0; i<=numberOfDivide; i++) {
        ans+=pow(2, i);
    }
    cout << ans;
    return 0;
}
