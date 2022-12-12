#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc044/tasks/abc044_b
// 簡単

int main() {
    string W; cin >> W;
    // 判定用の配列を0埋め
    vector<int> counter(26); rep(i, 26) counter.at(i) = 0;

    // a~z(=97~122) を 0~26 に補正してカウンターを加算
    for (char w : W) counter.at(int(w) - 97)++;
    for (int i : counter) {
        // 奇数が含まれればNo
        if(i & 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
