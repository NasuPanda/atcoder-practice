#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc086/tasks/abc086_b
// 簡単 C++の型変換面倒だな

// 数値a, bが与えられる
// ab と読んだ時、その数が平方数(正の整数の平方根を持つ数)かどうか判定する (y/n出力)

int main() {
    string a, b;
    cin >> a >> b;
    // 文字列を結合→int型にキャスト
    int ab = atoi((a + b).c_str());

    if (sqrt(ab) == int(sqrt(ab))) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

