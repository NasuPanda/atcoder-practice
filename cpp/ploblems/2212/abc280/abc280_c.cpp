#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc280/tasks/abc280_c
// Cにしては簡単すぎる

// 文字列S, Tが与えられる。TはSに1文字挿入してできた文字列。挿入された文字は何文字目か答えよ。

int main() {
    string S, T;
    cin >> S >> T;
    
    // 長さ合わせておきたいのでダミー文字を挿入
    S.push_back(' ');
    
    rep(i, T.size()) {
        if (!(S.at(i) == T.at(i))) {
            // 「何番目の文字」なのでインデックスに +1 しておく
            cout << i + 1;
            return 0;
        };
    }
}

