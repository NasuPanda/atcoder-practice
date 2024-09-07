#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc063/tasks/abc084_b
// 割と簡単

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;
    // A+B+1 文字からなる
    if (S.size() != A+B+1) {
        cout << "No";
        return 0;
    }
    bool isValid=true;
    rep(i, S.size()) {
        // A+1 文字目はハイフン -
        if (i == A) {
            if (S.at(i) != '-') isValid=false;
        }
        // それ以外の全ての文字は 0 以上 9 以下の数字
        else {
            if (!(isdigit(S.at(i)))) isValid=false;
        }
    }

    string ans = isValid ? "Yes" : "No";
    cout << ans;

    return 0;
}
