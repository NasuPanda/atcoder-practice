#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// H * W マスの左上隅に角行の駒がある
// 好きな回数操作した時、たどり着けるマスの数を答えよ

int main() {
    int64_t H, W, ans;
    cin >> H >> W;
    
    // H or W が1: 答えは1 (動けない)
    // H * W が
        // 偶数: 答えは H*W / 2
        // 奇数: 答えは H*W / 2 の切り捨て + 1
    int64_t area = H * W;
    if (H == 1 || W == 1) {
        ans = 1;
    } else if (area % 2 == 0) {
        ans = area / 2;
    } else {
        ans = floor(area / 2) + 1;
    }

    cout << ans << endl;
}

