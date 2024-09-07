#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc156/tasks/abc156_c
// すんなり解けた

// 数直線座標上に何人かが存在。同じ座標に全員を集めたい。
// 移動には距離に応じた体力を消耗する。最も体力の消耗が少なくて済む座標に集まる場合を考える。

#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
    // N 人存在する
    int N;
    cin >> N;
    // Ni さんは 座標 xi に存在する
    vector<int> X(N);
    rep (i, N) cin >> X.at(i);

    // 座標の最小値と最大値を取得する
    sort(X.begin(), X.end());
    int minX = X[0], maxX = X[N-1];

    // 体力の消耗の総和が最も小さいパターンを探す
    int minPhysicalExhaustion = 2147483647;
    for (int P=minX; P<=maxX; P++) {
        int physicalExhaustion = 0;
        for (int x: X) {
            physicalExhaustion += pow((x - P), 2.0);
        }
        if (physicalExhaustion < minPhysicalExhaustion) {
            minPhysicalExhaustion = physicalExhaustion;
        }
    }

    // 回答出力
    cout << minPhysicalExhaustion << endl;
}

