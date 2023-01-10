#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using vi = vector<int>;
using vvi = vector<vi>;

https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cg

// 入力で与えられる変数
int N, Q;
vi X(100009), Y(100009), A(100009), B(100009), C(100009), D(100009);

// 各座標にある点の数 S[i][j]、二次元累積和 T[i][j]
vvi S(1509, vi(1509)), T(1509, vi(1509));

int main() {
	// 入力
    cin >> N;
    for (int i=1; i<=N; i++) cin >> X[i] >> Y[i];
    cin >> Q;
    for (int i=1; i<=Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

    // 点の数を数える
    for (int i=1; i<=N; i++) S[X[i]][Y[i]] += 1;

    // 累積和
    // 初期化
    for (int i=0; i<=1500; i++) {
        for (int j=0; j<=1500; j++) T[i][j] = 0;
    }
    // 横
    for (int h=1; h<=1500; h++) {
        for (int w=1; w<=1500; w++) T[h][w] = T[h][w-1] + S[h][w];
    }
    // 縦
    for (int w=1; w<=1500; w++) {
        for (int h=1; h<=1500; h++) T[h][w] = T[h-1][w] + T[h][w];
    }

	// 答えを求める
    for (int i=1; i<=Q; i++) {
        cout << T[C[i]][D[i]] + T[A[i] - 1][B[i] - 1] - T[C[i]][B[i] - 1] - T[A[i] - 1][D[i]] << endl;
    }

	return 0;
}
