#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc281/tasks/abc281_d
// 組み合わせ全列挙がワカラナイ。


int main() {
    int N, K, D;
    cin >> N >> K >> D;
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);
    sort(a.begin(), a.end(), greater<int>());

    // 組み合わせ全列挙

    // 合計が D の倍数になったら終了

    return 0;
}
