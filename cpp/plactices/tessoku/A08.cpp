#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using vi = vector<int>;
using vvi = vector<vi>;

int H, W, Q;
vvi X(1509, vi(1509)), Z(1509, vi(1509));
vi A(100009), B(100009), C(100009), D(100009);

int main() {
    // 入力
    cin >> H >> W;
    for(int h=1; h<=H; h++) {
        for(int w=1; w<=W; w++) cin >> X.at(h).at(w);
    }
    cin >> Q;
    for(int i=1; i<=Q; i++) cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);

    // 配列Zの初期化
    for (int i=0; i<=H; i++) {
        for (int j=0; j<=W; j++) Z.at(i).at(j) = 0;
    }

    // 横方向の累積和
    for (int i=1; i<=H; i++) {
        for (int j=1; j<=W; j++) Z.at(i).at(j) = Z.at(i)[j-1] + X.at(i).at(j);
    }

    // 縦方向の累積和
    for (int j=1; j<=W; j++) {
        for (int i=1; i<=H; i++) Z.at(i).at(j) = Z.at(i-1)[j] + Z.at(i).at(j);
    }

    // 回答
    for(int i=1; i<=Q; i++) {
		cout << Z[C[i]][D[i]] + Z[A[i] - 1][B[i] - 1] - Z[A[i] - 1][D[i]] - Z[C[i]][B[i] - 1] << endl;
    }


	return 0;
}
