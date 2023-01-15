#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// a=>b / b=> a のようにロック関係が出来たらダメ
// 2ペアなら辞書順ソート→二分探索で行けるじゃん！
// と思ったが、よく考えたら3以上のペアもあるからダメだ。分からん。

int main() {
    int N; cin >> N;
    vector<pair<string, string>> ST(N);
    rep(i,N) {
        string s; cin >> s;
        string t; cin >> t;
        ST.at(i) = make_pair(s,t);
    }

    sort(ST.begin(), ST.end());

	return 0;
}
