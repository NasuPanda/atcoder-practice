#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string O, E; cin >> O >> E;
    // 奇数の方が大きいことはありえるので、IndexErrorを防ぐために偶数の長さを使う
    rep(i, E.size()) {
        cout << O[i] << E[i];
    }

    // 奇数のほうが長いなら最後の文字を出力
    if (O.size() != E.size()) cout << O[O.size() - 1];

	return 0;
}
