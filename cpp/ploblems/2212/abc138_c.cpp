#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc138/tasks/abc138_c
// 簡単
// 最後に合成する片割れが max(V) の時、合成した価値は最も大きくなる。

double alchemy(double x, double y) {
    return (x + y) / 2;
}

int main() {
    int N;
    cin >> N;
    vector<double> V(N);

    rep(i, N) cin >> V.at(i);
    sort(V.begin(), V.end());

    double totalValue = V.at(0);
    for (int vi=1; vi < N - 1; vi++) {
        totalValue = alchemy(totalValue, V.at(vi));
    }

    cout << alchemy(totalValue, V.at(V.size() - 1));

    return 0;
}
