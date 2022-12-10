#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc114/tasks/abc114_b
// 問題は簡単。c++の文字列の扱いに苦戦

int main() {
    const int TARGET = 753;
    string S;
    cin >> S;

    int idx=0, endIdx=S.size()-3;
    int ans=1000;

    while(idx <= endIdx) {
        int diff = abs(TARGET - atoi(S.substr(idx, 3).c_str()));
        if (ans > diff) ans = diff;
        idx++;
    }

    cout << abs(ans);
    return 0;
}
