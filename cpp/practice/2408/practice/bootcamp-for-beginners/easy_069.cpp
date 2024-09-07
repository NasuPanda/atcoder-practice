#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int ans = 0;
string S;

// 文字列を分割する
// 制約 : 分割結果の文字をSiとした時、Si≠Si+1
int main() {
    cin >> S;

    string fore = "", back = "";
    fore += (S.at(0));

    for (int i=1; i<S.size(); i++) {
        back += S.at(i);
        // cout << "fore: " << fore << " back: " << back << endl;
        if (fore != back) {
            fore = back;
            back = "";
            ans += 1;
        }
    }

    cout << ans + 1;
	return 0;
}
