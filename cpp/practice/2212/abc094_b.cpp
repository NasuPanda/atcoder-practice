#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc094/tasks/abc094_b
// 簡単
// X~0, X~N 区間のAの数 = コストの合計を比較すればいい

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(M);
    rep(i, M) cin >> A.at(i);

    int costToZero=0, costToN=0;

    for (int a : A) {
        // X(初期位置)よりも0側に近い
        if (a < X) costToZero++;
        else costToN++;
    }

    cout << min(costToZero, costToN);

    return 0;
}
