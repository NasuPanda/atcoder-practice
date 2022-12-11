#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc108/tasks/abc108_b
// むずい。回転行列出てこなかった。
// 解説: https://blog.hamayanhamayan.com/entry/2018/09/02/223200

int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // x1y1, x2y2 間のベクトル
    int vx = x2-x1, vy =  y2-y1;
    int currentX = x2, currentY = y2;

    rep(i, 2) {
        // 回転行列の考え方でベクトルを90°回転させる
        int _vx = -vy;
        int _vy = vx;
        vx = _vx;
        vy = _vy;

        // 90°回転させた座標位置を求める
        currentX += vx;
        currentY += vy;

        cout << currentX << ' ' << currentY << ' ';
    }

    return 0;
}
