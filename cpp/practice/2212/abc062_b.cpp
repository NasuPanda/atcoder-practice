#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc062/tasks/abc062_b
// まぁかんたん。

int main() {
    int H,W; cin >> H >> W;

    rep(i, W+2) cout << '#';
    cout << endl;

    rep(i, H) {
        cout << '#';

        rep(i, W) {
            char c; cin >> c;
            cout << c;
        }

        cout << '#' << endl;
    }

    rep(i, W+2) cout << '#';
    cout << endl;

    return 0;
}
