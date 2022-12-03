#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int return_min(vector<int> vec) {
    // 適当な大きい値
    int minx = 2147483647;

    for (int i=0; i<vec.size(); i++) {
        minx = min(minx, vec.at(i));
    }
    return minx;
}

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

