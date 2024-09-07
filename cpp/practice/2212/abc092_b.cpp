#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc092/tasks/abc092_b
// 簡単

// 食べた量を返す
int amountEaten(int D, int A) {
    // 1日目は必ず食べる
    int res = 1;
    int today = 1, count = 1;

    while(true) {
        today += count * A;
        if (today <= D) res++;
        else break;
    }

    return res;
}

int main() {
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    int ans = X;
    rep(i, N) ans += amountEaten(D, A.at(i));
    cout << ans;

    return 0;
}
