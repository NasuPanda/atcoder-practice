#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int H, W, N;
int A[100009], B[100009], C[100009], D[100009];
int X[1509][1509], Z[1509][1509];

int main() {
    cin >> H >> W >> N;
    for (int i=1; i<=N; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

    // 各日について計算する
    for (int i=1; i<=N; i++) {
        X[A[i]][B[i]] += 1;
        X[C[i]+1][D[i]+1] += 1;
        X[A[i]][D[i]+1] -= 1;
        X[C[i]+1][B[i]] -= 1;
    }

    // 累積和を取る
    for (int h=1; h<=H; h++) {
        for (int w=1; w<=W; w++) Z[h][w] = Z[h][w-1] + X[h][w];
    }
    for (int w=1; w<=W; w++) {
        for (int h=1; h<=H; h++) Z[h][w] = Z[h-1][w] + Z[h][w];
    }

    // 出力
    for (int h=1; h<=H; h++) {
        for (int w=1; w<=W; w++) {
            cout << Z[h][w] << ' ';
        }
        cout << endl;
    }

	return 0;
}
