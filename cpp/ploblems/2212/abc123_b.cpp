#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc123/tasks/abc123_b
// 丁寧な条件分け、「1の位のみ取得」ができれば解ける

int main() {
    vector <int> dishes(5);
    rep(i, 5) cin >> dishes.at(i);

    // 最後に注文する料理のインデックス
    int lastOrderIndex;

    // 10区切りでしか料理は出来ないので、1の位が最も小さいものが最後
    int minOnesPlace = 10;
    int onesPlace; // 1の位の値
    rep(i, 5) {
        int d = dishes.at(i);
        // 1~9
        if (d <= 9) onesPlace = d;
        // 10~99
        else if (d <= 99) onesPlace = d % 10;
        // 100以上
        else onesPlace = d % 100 % 10;

        // 0を含んではいけない
        if (onesPlace != 0 && onesPlace < minOnesPlace) {
            minOnesPlace = onesPlace;
            lastOrderIndex = i;
        }
    }

    // 時間算出
    int ans=0;
    rep(i, 5) {
        if (i != lastOrderIndex) {
            int d = dishes.at(i);
            // 1の位を切り上げて加算
            ans += ceil(d / 10.0) * 10;
        }
    }
    ans += dishes.at(lastOrderIndex);
    cout << ans;

    return 0;
}
