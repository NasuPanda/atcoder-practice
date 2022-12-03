#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc121/tasks/abc121_b
// 感想 簡単すぎる

// 入力
// N, M, C
// B * M個
// A * M個 が N回続く

int main() {
    int A, ans;
    // ソースコードN個, 特徴の数M, 定数C
    int N, M, C;
    cin >> N >> M >> C;
    // 定数の配列Bを用意
    vector<int> B(M);
    rep(i, M) cin >> B.at(i);
    
    // 探索開始
    rep(i, N) {
        // 初期化
        int solver = 0;

        rep(i, M) {
            cin >> A;
            // Ai * Bi を加算
            solver += A * B.at(i);
        }

        // 判定に使う値にCを加算
        solver += C;
        if (solver > 0) ans++;
    }
    
    cout << ans << endl;
}

